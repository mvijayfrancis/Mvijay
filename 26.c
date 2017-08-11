def count(x):
   length = len(x)
   digit = 0
   etters = 0
   space = 0
   other = 0
   for i in x:
        if x[i].isalpha():
        letters += 1
        elif x[i].isnumeric():
        digit += 1
        elif x[i].isspace():
        space += 1
        else:
        other += 1
    return number,word,space,other
