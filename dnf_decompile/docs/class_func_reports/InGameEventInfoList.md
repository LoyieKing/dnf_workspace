# InGameEventInfoList

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## insertEventInfo

```asm
// === 0897eb30 InGameEventInfoList::insertEventInfo  [0x0897eb30-0x897eb58] ===
 897eb30:	55                   	push   %ebp
 897eb31:	89 e5                	mov    %esp,%ebp
 897eb33:	83 ec 18             	sub    $0x18,%esp
 897eb36:	8b 45 08             	mov    0x8(%ebp),%eax
 897eb39:	8d 55 0c             	lea    0xc(%ebp),%edx
 897eb3c:	89 54 24 04          	mov    %edx,0x4(%esp)
 897eb40:	89 04 24             	mov    %eax,(%esp)
 897eb43:	e8 66 79 00 00       	call   89864ae <_ZNSt3mapIi15InGameEventInfoSt4lessIiESaISt4pairIKiS0_EEEixERS4_>
 897eb48:	8b 55 10             	mov    0x10(%ebp),%edx
 897eb4b:	89 54 24 04          	mov    %edx,0x4(%esp)
 897eb4f:	89 04 24             	mov    %eax,(%esp)
 897eb52:	e8 af 6c 00 00       	call   8985806 <_ZN15InGameEventInfoaSERKS_>
 897eb57:	c9                   	leave
 897eb58:	c3                   	ret

```

```c
// InGameEventInfoList::insertEventInfo @ 0x897eb30

/* InGameEventInfoList::insertEventInfo(int, InGameEventInfo&) */

void __thiscall
InGameEventInfoList::insertEventInfo(InGameEventInfoList *this,int param_1,InGameEventInfo *param_2)

{
  InGameEventInfo *this_00;
  
  this_00 = (InGameEventInfo *)
            std::
            map<int,InGameEventInfo,std::less<int>,std::allocator<std::pair<int_const,InGameEventInfo>>>
            ::operator[]((map<int,InGameEventInfo,std::less<int>,std::allocator<std::pair<int_const,InGameEventInfo>>>
                          *)this,&param_1);
  InGameEventInfo::operator=(this_00,param_2);
  return;
}

```

