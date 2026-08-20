# setCharacSlotCountInfo

`_ZN5CUser22setCharacSlotCountInfoEhh`

`CUser::setCharacSlotCountInfo(unsigned char, unsigned char)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868b480` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868b480  _ZN5CUser22setCharacSlotCountInfoEhh
#           CUser::setCharacSlotCountInfo(unsigned char, unsigned char)
# range [0x0868b480, 0x0868b4fb]
0868b480 +0x00:  push   %ebp
0868b481 +0x01:  mov    %esp,%ebp
0868b483 +0x03:  sub    $0x38,%esp
0868b486 +0x06:  mov    0xc(%ebp),%edx
0868b489 +0x09:  mov    0x10(%ebp),%eax
0868b48c +0x0c:  mov    %dl,-0x1c(%ebp)
0868b48f +0x0f:  mov    %al,-0x20(%ebp)
0868b492 +0x12:  cmpb   $0x0,-0x1c(%ebp)
0868b496 +0x16:  je     0868b49e <+0x1e>
0868b498 +0x18:  cmpb   $0x0,-0x20(%ebp)
0868b49c +0x1c:  jne    0868b4d4 <+0x54>
0868b49e +0x1e:  mov    0x8(%ebp),%eax
0868b4a1 +0x21:  mov    %eax,(%esp)
0868b4a4 +0x24:  call   0868b4fc <_ZN5CUser29getCharacSlotCountDefaultInfoEv>  ; CUser::getCharacSlotCountDefaultInfo()
0868b4a9 +0x29:  mov    %al,-0x9(%ebp)
0868b4ac +0x2c:  movzbl -0x9(%ebp),%eax
0868b4b0 +0x30:  mov    %eax,0x4(%esp)
0868b4b4 +0x34:  mov    0x8(%ebp),%eax
0868b4b7 +0x37:  mov    %eax,(%esp)
0868b4ba +0x3a:  call   08230880 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5f2a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5f2a
0868b4bf +0x3f:  movzbl -0x9(%ebp),%eax
0868b4c3 +0x43:  mov    %eax,0x4(%esp)
0868b4c7 +0x47:  mov    0x8(%ebp),%eax
0868b4ca +0x4a:  mov    %eax,(%esp)
0868b4cd +0x4d:  call   0869755c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3db1>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3db1
0868b4d2 +0x52:  jmp    0868b4fa <+0x7a>
0868b4d4 +0x54:  movzbl -0x1c(%ebp),%eax
0868b4d8 +0x58:  mov    %eax,0x4(%esp)
0868b4dc +0x5c:  mov    0x8(%ebp),%eax
0868b4df +0x5f:  mov    %eax,(%esp)
0868b4e2 +0x62:  call   08230880 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5f2a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5f2a
0868b4e7 +0x67:  movzbl -0x20(%ebp),%eax
0868b4eb +0x6b:  mov    %eax,0x4(%esp)
0868b4ef +0x6f:  mov    0x8(%ebp),%eax
0868b4f2 +0x72:  mov    %eax,(%esp)
0868b4f5 +0x75:  call   0869755c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3db1>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3db1
0868b4fa +0x7a:  leave
0868b4fb +0x7b:  ret
```

## 反编译 C

```c
// CUser::setCharacSlotCountInfo @ 0x868b480

/* CUser::setCharacSlotCountInfo(unsigned char, unsigned char) */

void __thiscall CUser::setCharacSlotCountInfo(CUser *this,uchar param_1,uchar param_2)

{
  uchar uVar1;
  
  if ((param_1 == '\0') || (param_2 == '\0')) {
    uVar1 = getCharacSlotCountDefaultInfo();
    setSlotEffectCount(this,uVar1);
    setCharacSlotLimit(this,uVar1);
  }
  else {
    setSlotEffectCount(this,param_1);
    setCharacSlotLimit(this,param_2);
  }
  return;
}
```
