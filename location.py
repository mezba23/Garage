# importing geopy library
from geopy.geocoders import Nominatim

# calling the Nominatim tool
loc = Nominatim(user_agent="GetLoc")

# entering the getLoc name
getLoc = loc.geocode("Bengaluru")

# printing address
print(getLoc.address)

# printing latitude and longitude
print("Latitude = ", getLoc.latitude,)
print("Longitude = ", getLoc.longitude)
