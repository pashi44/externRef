.section .text
.global _start
_start:

ldr x0,=list
#; pre increment , where the    base offset  dosent chage  but  x1,  has the updtaes 
# ldr x1, [x0,  #4]


# post -increment  ldr  x1, [x0],  #4   ;  it works the base offset is incremennt  where x1 has base offset
#  value
#  lder  x1, [x0], #4



#  pre-index increment  with update 

ldr  x1, [x0,  #4]!
# in this mode the base offset is incremented and the register x1 too


mov x7,  #1
SVC 0




exit: 
mov  x7, #1
SVC 0




.section  .data
list:  
    .word  0x10,0x11, 0x12 
.end
