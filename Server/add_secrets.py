Import("env", "projenv")
import json

secrets_path = ".\\secrets.json"

def assemble_configurations(entry, name=""):
  
  if type(entry) is not dict:
    yield (name[1:], entry)
  else:
    for key in entry.keys():
      yield from assemble_configurations(entry[key], f"{name}_{key.upper()}")
 

with open(secrets_path, 'r') as secrets_file:
 secrets = json.load(secrets_file)
 projenv.Append(CPPDEFINES=list(assemble_configurations(secrets)))