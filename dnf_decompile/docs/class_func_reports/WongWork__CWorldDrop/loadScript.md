# loadScript

`_ZN8WongWork10CWorldDrop10loadScriptEPKcS2_`

`WongWork::CWorldDrop::loadScript(char const*, char const*)`

| 类 | 地址 |
|---|---|
| `WongWork::CWorldDrop` | `0x0853855c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0853855c  _ZN8WongWork10CWorldDrop10loadScriptEPKcS2_
#           WongWork::CWorldDrop::loadScript(char const*, char const*)
# range [0x0853855c, 0x085385b1]
0853855c +0x00:  push   %ebp
0853855d +0x01:  mov    %esp,%ebp
0853855f +0x03:  sub    $0x18,%esp
08538562 +0x06:  mov    0x8(%ebp),%eax
08538565 +0x09:  lea    0x18(%eax),%edx
08538568 +0x0c:  mov    0xc(%ebp),%eax
0853856b +0x0f:  mov    %eax,0x4(%esp)
0853856f +0x13:  mov    %edx,(%esp)
08538572 +0x16:  call   089022be <_Z15ImportWorldDropP13WorldDropInfoPKc>  ; ImportWorldDrop(WorldDropInfo*, char const*)
08538577 +0x1b:  xor    $0x1,%eax
0853857a +0x1e:  test   %al,%al
0853857c +0x20:  je     08538585 <+0x29>
0853857e +0x22:  mov    $0x7b9,%eax
08538583 +0x27:  jmp    085385b0 <+0x54>
08538585 +0x29:  mov    0x8(%ebp),%eax
08538588 +0x2c:  lea    0xfcc(%eax),%edx
0853858e +0x32:  mov    0x10(%ebp),%eax
08538591 +0x35:  mov    %eax,0x4(%esp)
08538595 +0x39:  mov    %edx,(%esp)
08538598 +0x3c:  call   089022be <_Z15ImportWorldDropP13WorldDropInfoPKc>  ; ImportWorldDrop(WorldDropInfo*, char const*)
0853859d +0x41:  xor    $0x1,%eax
085385a0 +0x44:  test   %al,%al
085385a2 +0x46:  je     085385ab <+0x4f>
085385a4 +0x48:  mov    $0x7bb,%eax
085385a9 +0x4d:  jmp    085385b0 <+0x54>
085385ab +0x4f:  mov    $0x0,%eax
085385b0 +0x54:  leave
085385b1 +0x55:  ret
```

## 反编译 C

```c
// WongWork::CWorldDrop::loadScript @ 0x853855c

/* WongWork::CWorldDrop::loadScript(char const*, char const*) */

undefined4 __thiscall WongWork::CWorldDrop::loadScript(CWorldDrop *this,char *param_1,char *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = ImportWorldDrop((WorldDropInfo *)(this + 0x18),param_1);
  if (cVar1 == '\x01') {
    cVar1 = ImportWorldDrop((WorldDropInfo *)(this + 0xfcc),param_2);
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      uVar2 = 0x7bb;
    }
  }
  else {
    uVar2 = 0x7b9;
  }
  return uVar2;
}
```
