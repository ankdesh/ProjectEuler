def findSeq(listOfAllPerms):
    for asd in listOfAllPerms:
        for lenSubNo in range(1,len(asd)):
            logic = True
            for j in range(lenSubNo,len(asd),lenSubNo):
                if ((listToInt(asd[0:lenSubNo])*((j/lenSubNo)+1)) != listToInt(asd[j:j+lenSubNo])):
                    logic = False
            if(logic == True):
                 return True,asd
