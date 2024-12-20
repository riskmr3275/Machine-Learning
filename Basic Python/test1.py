import requests

# Twitter API endpoint
url = "https://api.twitter.com/2/users/by/username/RISUGUPTA2"
url1= "https://api.twitter.com/2/users/1298160545846013958/tweets"

# Headers with Bearer Token
headers = {
    "Authorization": "Bearer AAAAAAAAAAAAAAAAAAAAAAVZxQEAAAAAuw9HegRkPcd6YjoeuEJ8N67Pjlk%3DIP9XoJa4GuDbqkQDKRzrgYX4sDTCpNnnbK7B6NNLjWuR9eS8ew"
}

# Send the GET request
response = requests.get(url, headers=headers)
response1 = requests.get(url1, headers=headers)

# Print the response
if response.status_code == 200:
    print("User Data:", response.json())
else:
    print("Error:", response.status_code, response.json())


if response1.status_code == 200:
    print("User Twweet Data:", response1.json())
else:
    print("Error:", response.status_code, response1.json())


 