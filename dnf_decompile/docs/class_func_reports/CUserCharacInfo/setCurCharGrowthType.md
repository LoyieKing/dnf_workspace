# setCurCharGrowthType

`_ZN15CUserCharacInfo20setCurCharGrowthTypeEcc`

`CUserCharacInfo::setCurCharGrowthType(char, char)`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x0864e2d8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864e2d8  _ZN15CUserCharacInfo20setCurCharGrowthTypeEcc
#           CUserCharacInfo::setCurCharGrowthType(char, char)
# range [0x0864e2d8, 0x0864e34d]
0864e2d8 +0x00:  push   %ebp
0864e2d9 +0x01:  mov    %esp,%ebp
0864e2db +0x03:  sub    $0x28,%esp
0864e2de +0x06:  mov    0xc(%ebp),%edx
0864e2e1 +0x09:  mov    0x10(%ebp),%eax
0864e2e4 +0x0c:  mov    %dl,-0xc(%ebp)
0864e2e7 +0x0f:  mov    %al,-0x10(%ebp)
0864e2ea +0x12:  cmpb   $0x6,-0xc(%ebp)
0864e2ee +0x16:  jg     0864e348 <+0x70>
0864e2f0 +0x18:  cmpb   $0x2,-0x10(%ebp)
0864e2f4 +0x1c:  jg     0864e34b <+0x73>
0864e2f6 +0x1e:  mov    0x8(%ebp),%eax
0864e2f9 +0x21:  mov    %eax,(%esp)
0864e2fc +0x24:  call   0822f262 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x490c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x490c
0864e301 +0x29:  mov    0x8(%ebp),%eax
0864e304 +0x2c:  mov    0x10(%eax),%edx
0864e307 +0x2f:  movzbl -0xc(%ebp),%eax
0864e30b +0x33:  shl    $0x4,%eax
0864e30e +0x36:  sar    $0x4,%al
0864e311 +0x39:  mov    %eax,%ecx
0864e313 +0x3b:  and    $0xf,%ecx
0864e316 +0x3e:  movzbl 0x29(%edx),%eax
0864e31a +0x42:  and    $0xfffffff0,%eax
0864e31d +0x45:  or     %ecx,%eax
0864e31f +0x47:  mov    %al,0x29(%edx)
0864e322 +0x4a:  mov    0x8(%ebp),%eax
0864e325 +0x4d:  mov    0x10(%eax),%edx
0864e328 +0x50:  movzbl -0x10(%ebp),%eax
0864e32c +0x54:  shl    $0x5,%eax
0864e32f +0x57:  sar    $0x5,%al
0864e332 +0x5a:  and    $0x7,%eax
0864e335 +0x5d:  mov    %eax,%ecx
0864e337 +0x5f:  shl    $0x4,%ecx
0864e33a +0x62:  movzbl 0x29(%edx),%eax
0864e33e +0x66:  and    $0xffffff8f,%eax
0864e341 +0x69:  or     %ecx,%eax
0864e343 +0x6b:  mov    %al,0x29(%edx)
0864e346 +0x6e:  jmp    0864e34c <+0x74>
0864e348 +0x70:  nop
0864e349 +0x71:  jmp    0864e34c <+0x74>
0864e34b +0x73:  nop
0864e34c +0x74:  leave
0864e34d +0x75:  ret
```

## 反编译 C

```c
// CUserCharacInfo::setCurCharGrowthType @ 0x864e2d8

/* CUserCharacInfo::setCurCharGrowthType(char, char) */

void __thiscall
CUserCharacInfo::setCurCharGrowthType(CUserCharacInfo *this,char param_1,char param_2)

{
  if ((param_1 < '\a') && (param_2 < '\x03')) {
    enableSaveCharacInfo(this);
    *(byte *)(*(int *)(this + 0x10) + 0x29) =
         *(byte *)(*(int *)(this + 0x10) + 0x29) & 0xf0 | (char)(param_1 << 4) >> 4 & 0xfU;
    *(byte *)(*(int *)(this + 0x10) + 0x29) =
         *(byte *)(*(int *)(this + 0x10) + 0x29) & 0x8f | ((char)(param_2 << 5) >> 5 & 7U) << 4;
  }
  return;
}
```
