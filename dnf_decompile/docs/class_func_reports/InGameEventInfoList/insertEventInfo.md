# insertEventInfo

`_ZN19InGameEventInfoList15insertEventInfoEiR15InGameEventInfo`

`InGameEventInfoList::insertEventInfo(int, InGameEventInfo&)`

| 类 | 地址 |
|---|---|
| `InGameEventInfoList` | `0x0897eb30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0897eb30  _ZN19InGameEventInfoList15insertEventInfoEiR15InGameEventInfo
#           InGameEventInfoList::insertEventInfo(int, InGameEventInfo&)
# range [0x0897eb30, 0x0897eb58]
0897eb30 +0x00:  push   %ebp
0897eb31 +0x01:  mov    %esp,%ebp
0897eb33 +0x03:  sub    $0x18,%esp
0897eb36 +0x06:  mov    0x8(%ebp),%eax
0897eb39 +0x09:  lea    0xc(%ebp),%edx
0897eb3c +0x0c:  mov    %edx,0x4(%esp)
0897eb40 +0x10:  mov    %eax,(%esp)
0897eb43 +0x13:  call   089864ae <_GLOBAL__I__ZN19InGameEventInfoList15insertEventInfoEiR15InGameEventInfo+0xcc5>  ; global constructors keyed to InGameEventInfoList::insertEventInfo(int, InGameEventInfo&)+0xcc5
0897eb48 +0x18:  mov    0x10(%ebp),%edx
0897eb4b +0x1b:  mov    %edx,0x4(%esp)
0897eb4f +0x1f:  mov    %eax,(%esp)
0897eb52 +0x22:  call   08985806 <_GLOBAL__I__ZN19InGameEventInfoList15insertEventInfoEiR15InGameEventInfo+0x1d>  ; global constructors keyed to InGameEventInfoList::insertEventInfo(int, InGameEventInfo&)+0x1d
0897eb57 +0x27:  leave
0897eb58 +0x28:  ret
```

## 反编译 C

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
