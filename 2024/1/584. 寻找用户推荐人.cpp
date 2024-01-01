//
// Created by ttlto on 2024/1/1.
//
select name from Customer where ifnull(referee_id,0) !=2;