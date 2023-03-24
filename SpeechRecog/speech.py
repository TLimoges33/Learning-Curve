#import library

import speech_recognition as sr

# Initialize recognizer class (for recognizing the speech)

r = sr.Recognizer()

# Reading Microphone as source
# listening the speech and store in audio_text variable

with sr.Microphone() as source:
    print("Mic Hot: Talk now...")
    audio_text = r.listen(source)
    print("Time over, working on output...")
# recoginize_() method will throw a request error if the API is unreachable, 
# thats why we're using exception handling
    
    try:
        # using google speech recognition
        print("Text: "+r.recognize_google(audio_text))
    except:
         print("Sorry, I did not get that")