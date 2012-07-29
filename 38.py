def allPermuteSorted(listOfdigits):
             resultList = []
             for k in all_perm(listOfdigits):
                 k.reverse()
                 resultList.append(k)
             return resultList
def all_perm(str):
    if len(str) <=1:
        #print "++",str
        yield str
    else:
        #print "^^",str
        for perm in all_perm(str[1:]):
        #    print "<<",perm
            for i in range(len(perm)+1):
                #print i
                #nb str[0:1] works in both string and list contexts
                #print ">>",perm[:i] + str[0:1] + perm[i:]
                yield perm[:i] + str[0:1] + perm[i:]

def listToInt(listOfInt):
   pqr = 0 
   for i in listOfInt:
       pqr = pqr*10+i
   return pqr
def findSeq(listOfAllPerms):
    for asd in listOfAllPerms:
        for lenSubNo in range(1,len(asd)):
            logic = True
            for j in range(lenSubNo,len(asd),lenSubNo):
                if ((listToInt(asd[0:lenSubNo])*((j/lenSubNo)+1)) != listToInt(asd[j:j+lenSubNo])):
#                    print (listToInt(asd[0:lenSubNo])*((j/lenSubNo)+1)),listToInt(asd[j:j+lenSubNo])
                    logic = False
            if(logic == True):
                 return True,asd
    return False,[0]
