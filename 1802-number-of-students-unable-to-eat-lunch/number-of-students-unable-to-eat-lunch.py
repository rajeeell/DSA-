class Solution:
    def countStudents(self, students: List[int], sandwiches: List[int]) -> int:
        stud=len(students)
        cnt=Counter(students)

        for i in sandwiches:

            if cnt[i]>0:
                cnt[i]=cnt[i]-1
                stud=stud-1
                
            else:
                break

        return stud