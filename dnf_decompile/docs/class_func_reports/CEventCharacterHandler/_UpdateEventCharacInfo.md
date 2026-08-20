# _UpdateEventCharacInfo

`_ZN22CEventCharacterHandler22_UpdateEventCharacInfoEP5CUser`

`CEventCharacterHandler::_UpdateEventCharacInfo(CUser*)`

| 类 | 地址 |
|---|---|
| `CEventCharacterHandler` | `0x0848e636` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0848e636  _ZN22CEventCharacterHandler22_UpdateEventCharacInfoEP5CUser
#           CEventCharacterHandler::_UpdateEventCharacInfo(CUser*)
# range [0x0848e636, 0x0848e651]
0848e636 +0x00:  push   %ebp
0848e637 +0x01:  mov    %esp,%ebp
0848e639 +0x03:  sub    $0x18,%esp
0848e63c +0x06:  mov    0xc(%ebp),%eax
0848e63f +0x09:  movl   $0xffffffff,0x4(%esp)
0848e647 +0x11:  mov    %eax,(%esp)
0848e64a +0x14:  call   0848ed5a <_GLOBAL__I__Z30CEventCharacterHandlerInstancev+0xa8>  ; global constructors keyed to CEventCharacterHandlerInstance()+0xa8
0848e64f +0x19:  leave
0848e650 +0x1a:  ret
0848e651 +0x1b:  nop
```

## 反编译 C

```c
// CEventCharacterHandler::_UpdateEventCharacInfo @ 0x848e636

/* CEventCharacterHandler::_UpdateEventCharacInfo(CUser*) */

void __thiscall
CEventCharacterHandler::_UpdateEventCharacInfo(CEventCharacterHandler *this,CUser *param_1)

{
  CUserCharacInfo::setCurCharacEventCharacterGrowtype((CUserCharacInfo *)param_1,-1);
  return;
}
```
