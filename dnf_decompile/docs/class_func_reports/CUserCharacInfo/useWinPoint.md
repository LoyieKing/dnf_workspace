# useWinPoint

`_ZN15CUserCharacInfo11useWinPointEi12eWPSubReason`

`CUserCharacInfo::useWinPoint(int, eWPSubReason)`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x0864e29c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864e29c  _ZN15CUserCharacInfo11useWinPointEi12eWPSubReason
#           CUserCharacInfo::useWinPoint(int, eWPSubReason)
# range [0x0864e29c, 0x0864e2d7]
0864e29c +0x00:  push   %ebp
0864e29d +0x01:  mov    %esp,%ebp
0864e29f +0x03:  sub    $0x18,%esp
0864e2a2 +0x06:  mov    0x8(%ebp),%eax
0864e2a5 +0x09:  mov    %eax,(%esp)
0864e2a8 +0x0c:  call   0822f286 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4930>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4930
0864e2ad +0x11:  mov    0x8(%ebp),%eax
0864e2b0 +0x14:  mov    0x70(%eax),%eax
0864e2b3 +0x17:  cmp    0xc(%ebp),%eax
0864e2b6 +0x1a:  jl     0864e2cb <+0x2f>
0864e2b8 +0x1c:  mov    0x8(%ebp),%eax
0864e2bb +0x1f:  mov    0x70(%eax),%eax
0864e2be +0x22:  mov    %eax,%edx
0864e2c0 +0x24:  sub    0xc(%ebp),%edx
0864e2c3 +0x27:  mov    0x8(%ebp),%eax
0864e2c6 +0x2a:  mov    %edx,0x70(%eax)
0864e2c9 +0x2d:  jmp    0864e2d5 <+0x39>
0864e2cb +0x2f:  mov    0x8(%ebp),%eax
0864e2ce +0x32:  movl   $0x0,0x70(%eax)
0864e2d5 +0x39:  leave
0864e2d6 +0x3a:  ret
0864e2d7 +0x3b:  nop
```

## 反编译 C

```c
// CUserCharacInfo::useWinPoint @ 0x864e29c

/* CUserCharacInfo::useWinPoint(int, eWPSubReason) */

void CUserCharacInfo::useWinPoint(CUserCharacInfo *param_1,int param_2)

{
  enableSavePvP(param_1);
  if (*(int *)(param_1 + 0x70) < param_2) {
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  else {
    *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) - param_2;
  }
  return;
}
```
