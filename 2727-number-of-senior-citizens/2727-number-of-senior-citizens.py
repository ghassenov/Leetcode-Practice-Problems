class Solution(object):
    def countSeniors(self, details):
        nb_passengers = 0
        n = len(details)
        for i in range(n):
            char_age = details[i][11] + details[i][12]
            age = int(char_age)
            if(age>60):
                nb_passengers +=1
        return nb_passengers

        