#%%
import os

PORT_BASE=9100
NUM_STUDENT = 10
#IMG_NAME = {codercom/code-server, codercom/code-server_cpp}
IMG_NAME = "codercom/code-server"

# read template
with open('src/docker-compose.yml.template', 'r') as f:
    template_str = f.read()


template_content=""
for ii in range(0,NUM_STUDENT):
    str_user_id="{:03d}".format(ii)
    str_user_port="{:04d}".format(PORT_BASE+ii)
    template_content = template_content + template_str.format(IMG_NAME=IMG_NAME, USER_ID=str_user_id,USER_ID_PORT=str_user_port)
    
    # create folder
    if not os.path.exists("./srv/{:s}/config".format(str_user_id)):
        os.makedirs("./srv/{:s}/config".format(str_user_id))

template_header="version: \"3.9\"\n\nservices:"
template_network="networks:\n    frontend:\n        internal: false"
with open('docker-compose.yml', 'w') as f:
    f.write(template_header)
    f.write(template_content)
    f.write(template_network)
