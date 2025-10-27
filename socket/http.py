import requests 
rx=requests.get("https://google.com")
print(rx.text)
print(rx.status_code)
# delete get head put post patch request 

