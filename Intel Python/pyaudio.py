import pyttsx3
import time
bot=pyttsx3.init()
voices = bot.getProperty('voices') 
bot.setProperty('voice', voices[1].id)
bot.say("HELLO sir")
time.sleep(2)
# bot.say("")
bot.runAndWait()