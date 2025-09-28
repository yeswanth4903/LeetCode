# Write your MySQL query statement below
with t1 as(
    select * from students join subjects
)
select s.student_id , s.student_name, s.subject_name,case when count(e.subject_name) then count(e.student_id) else 0 end as attended_exams from t1 s left join examinations e on s.student_id  = e.student_id and s.subject_name = e.subject_name group by s.student_id,s.subject_name order by s.student_id;

