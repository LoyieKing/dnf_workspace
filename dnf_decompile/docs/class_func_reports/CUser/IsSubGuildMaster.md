# IsSubGuildMaster

`_ZN5CUser16IsSubGuildMasterEv`

`CUser::IsSubGuildMaster()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0866c414` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0866c414  _ZN5CUser16IsSubGuildMasterEv
#           CUser::IsSubGuildMaster()
# range [0x0866c414, 0x0866c469]
0866c414 +0x00:  push   %ebp
0866c415 +0x01:  mov    %esp,%ebp
0866c417 +0x03:  push   %ebx
0866c418 +0x04:  sub    $0x24,%esp
0866c41b +0x07:  movl   $0x0,-0xc(%ebp)
0866c422 +0x0e:  jmp    0866c453 <+0x3f>
0866c424 +0x10:  mov    -0xc(%ebp),%edx
0866c427 +0x13:  mov    0x8(%ebp),%eax
0866c42a +0x16:  add    $&_ZL14gUnicodeBuffer+0x18ee4,%edx
0866c430 +0x1c:  mov    0xe(%eax,%edx,4),%ebx
0866c434 +0x20:  mov    0x8(%ebp),%eax
0866c437 +0x23:  mov    %eax,(%esp)
0866c43a +0x26:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0866c43f +0x2b:  cmp    %eax,%ebx
0866c441 +0x2d:  sete   %al
0866c444 +0x30:  test   %al,%al
0866c446 +0x32:  je     0866c44f <+0x3b>
0866c448 +0x34:  mov    $0x1,%eax
0866c44d +0x39:  jmp    0866c463 <+0x4f>
0866c44f +0x3b:  addl   $0x1,-0xc(%ebp)
0866c453 +0x3f:  cmpl   $0x4,-0xc(%ebp)
0866c457 +0x43:  setle  %al
0866c45a +0x46:  test   %al,%al
0866c45c +0x48:  jne    0866c424 <+0x10>
0866c45e +0x4a:  mov    $0x0,%eax
0866c463 +0x4f:  add    $0x24,%esp
0866c466 +0x52:  pop    %ebx
0866c467 +0x53:  pop    %ebp
0866c468 +0x54:  ret
0866c469 +0x55:  nop
```

## 反编译 C

```c
// CUser::IsSubGuildMaster @ 0x866c414

/* CUser::IsSubGuildMaster() */

undefined4 __thiscall CUser::IsSubGuildMaster(CUser *this)

{
  int iVar1;
  int iVar2;
  int local_10;
  
  local_10 = 0;
  while( true ) {
    if (4 < local_10) {
      return 0;
    }
    iVar1 = *(int *)(this + (local_10 + 0x23410) * 4 + 0xe);
    iVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
    if (iVar1 == iVar2) break;
    local_10 = local_10 + 1;
  }
  return 1;
}
```
