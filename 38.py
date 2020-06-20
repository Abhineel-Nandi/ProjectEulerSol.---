from itertools import count, imap 
def ispandigital( seed):
   digits = str( seed)
   for i in count(2):
      ndig = len( digits)
      if ndig < 9: digits += str( seed * i)
      elif ndig == 9 and set( digits) == set( '123456789'):
         return int( digits)
      else: return False