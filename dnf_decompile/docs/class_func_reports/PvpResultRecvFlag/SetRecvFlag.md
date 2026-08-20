# SetRecvFlag

`_ZN17PvpResultRecvFlag11SetRecvFlagEi`

`PvpResultRecvFlag::SetRecvFlag(int)`

| 类 | 地址 |
|---|---|
| `PvpResultRecvFlag` | `0x085d5f98` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d5f98  _ZN17PvpResultRecvFlag11SetRecvFlagEi
#           PvpResultRecvFlag::SetRecvFlag(int)
# range [0x085d5f98, 0x085d5fc5]
085d5f98 +0x00:  push   %ebp
085d5f99 +0x01:  mov    %esp,%ebp
085d5f9b +0x03:  sub    $0x18,%esp
085d5f9e +0x06:  mov    0xc(%ebp),%eax
085d5fa1 +0x09:  mov    %eax,0x4(%esp)
085d5fa5 +0x0d:  mov    0x8(%ebp),%eax
085d5fa8 +0x10:  mov    %eax,(%esp)
085d5fab +0x13:  call   085df7b2 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x39>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x39
085d5fb0 +0x18:  xor    $0x1,%eax
085d5fb3 +0x1b:  test   %al,%al
085d5fb5 +0x1d:  jne    085d5fc3 <+0x2b>
085d5fb7 +0x1f:  mov    0xc(%ebp),%eax
085d5fba +0x22:  mov    0x8(%ebp),%edx
085d5fbd +0x25:  movb   $0x1,(%edx,%eax,1)
085d5fc1 +0x29:  jmp    085d5fc4 <+0x2c>
085d5fc3 +0x2b:  nop
085d5fc4 +0x2c:  leave
085d5fc5 +0x2d:  ret
```

## 反编译 C

```c
// PvpResultRecvFlag::SetRecvFlag @ 0x85d5f98

/* PvpResultRecvFlag::SetRecvFlag(int) */

void __thiscall PvpResultRecvFlag::SetRecvFlag(PvpResultRecvFlag *this,int param_1)

{
  char cVar1;
  
  cVar1 = IsValidIdx(this,param_1);
  if (cVar1 == '\x01') {
    this[param_1] = (PvpResultRecvFlag)0x1;
  }
  return;
}
```
