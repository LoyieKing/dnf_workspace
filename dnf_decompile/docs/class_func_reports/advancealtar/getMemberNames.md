# getMemberNames

`_ZN12advancealtar14getMemberNamesEP5CUserPc`

`advancealtar::getMemberNames(CUser*, char*)`

| 类 | 地址 |
|---|---|
| `advancealtar` | `0x0812cf54` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812cf54  _ZN12advancealtar14getMemberNamesEP5CUserPc
#           advancealtar::getMemberNames(CUser*, char*)
# range [0x0812cf54, 0x0812cfa5]
0812cf54 +0x00:  push   %ebp
0812cf55 +0x01:  mov    %esp,%ebp
0812cf57 +0x03:  push   %ebx
0812cf58 +0x04:  sub    $0x14,%esp
0812cf5b +0x07:  cmpl   $0x0,0x8(%ebp)
0812cf5f +0x0b:  je     0812cf9c <+0x48>
0812cf61 +0x0d:  cmpl   $0x0,0xc(%ebp)
0812cf65 +0x11:  je     0812cf9f <+0x4b>
0812cf67 +0x13:  mov    0x8(%ebp),%eax
0812cf6a +0x16:  mov    %eax,(%esp)
0812cf6d +0x19:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0812cf72 +0x1e:  mov    %eax,%ebx
0812cf74 +0x20:  mov    0x8(%ebp),%eax
0812cf77 +0x23:  mov    %eax,(%esp)
0812cf7a +0x26:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0812cf7f +0x2b:  mov    %ebx,0xc(%esp)
0812cf83 +0x2f:  mov    %eax,0x8(%esp)
0812cf87 +0x33:  movl   $"\"%s\",\"%s\",\"N/A\",\"N/A\",\"N/A\"",0x4(%esp)
0812cf8f +0x3b:  mov    0xc(%ebp),%eax
0812cf92 +0x3e:  mov    %eax,(%esp)
0812cf95 +0x41:  call   0807e440 <_init+0xd38>
0812cf9a +0x46:  jmp    0812cfa0 <+0x4c>
0812cf9c +0x48:  nop
0812cf9d +0x49:  jmp    0812cfa0 <+0x4c>
0812cf9f +0x4b:  nop
0812cfa0 +0x4c:  add    $0x14,%esp
0812cfa3 +0x4f:  pop    %ebx
0812cfa4 +0x50:  pop    %ebp
0812cfa5 +0x51:  ret
```

## 反编译 C

```c
// advancealtar::getMemberNames @ 0x812cf54

/* advancealtar::getMemberNames(CUser*, char*) */

void advancealtar::getMemberNames(CUser *param_1,char *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if ((param_1 != (CUser *)0x0) && (param_2 != (char *)0x0)) {
    uVar1 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
    uVar2 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
    sprintf(param_2,"\"%s\",\"%s\",\"N/A\",\"N/A\",\"N/A\"",uVar2,uVar1);
  }
  return;
}
```
