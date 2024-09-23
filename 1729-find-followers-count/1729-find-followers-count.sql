select distinct user_id,count(user_id) as followers_count
from Followers
# where count(user_id)
group by user_id
order by user_id asc