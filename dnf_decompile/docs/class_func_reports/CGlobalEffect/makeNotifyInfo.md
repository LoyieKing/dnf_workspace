# makeNotifyInfo

`_ZNK13CGlobalEffect14makeNotifyInfoER11PacketGuard`

`CGlobalEffect::makeNotifyInfo(PacketGuard&) const`

| 类 | 地址 |
|---|---|
| `CGlobalEffect` | `0x084b7880` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b7880  _ZNK13CGlobalEffect14makeNotifyInfoER11PacketGuard
#           CGlobalEffect::makeNotifyInfo(PacketGuard&) const
# range [0x084b7880, 0x084b7931]
084b7880 +0x00:  push   %ebp
084b7881 +0x01:  mov    %esp,%ebp
084b7883 +0x03:  sub    $0x28,%esp
084b7886 +0x06:  mov    0x8(%ebp),%eax
084b7889 +0x09:  mov    (%eax),%eax
084b788b +0x0b:  mov    %eax,%edx
084b788d +0x0d:  mov    0xc(%ebp),%eax
084b7890 +0x10:  mov    %edx,0x4(%esp)
084b7894 +0x14:  mov    %eax,(%esp)
084b7897 +0x17:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084b789c +0x1c:  mov    0x8(%ebp),%eax
084b789f +0x1f:  flds   0x4(%eax)
084b78a2 +0x22:  flds   &data#7a86edaf(.rodata)
084b78a8 +0x28:  fmulp  %st,%st(1)
084b78aa +0x2a:  fnstcw -0xa(%ebp)
084b78ad +0x2d:  movzwl -0xa(%ebp),%eax
084b78b1 +0x31:  mov    $0xc,%ah
084b78b3 +0x33:  mov    %ax,-0xc(%ebp)
084b78b7 +0x37:  fldcw  -0xc(%ebp)
084b78ba +0x3a:  fistpl -0x10(%ebp)
084b78bd +0x3d:  fldcw  -0xa(%ebp)
084b78c0 +0x40:  mov    -0x10(%ebp),%edx
084b78c3 +0x43:  mov    0xc(%ebp),%eax
084b78c6 +0x46:  mov    %edx,0x4(%esp)
084b78ca +0x4a:  mov    %eax,(%esp)
084b78cd +0x4d:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084b78d2 +0x52:  mov    0x8(%ebp),%eax
084b78d5 +0x55:  add    $0x8,%eax
084b78d8 +0x58:  mov    %eax,(%esp)
084b78db +0x5b:  call   0807e3b0 <_init+0xca8>
084b78e0 +0x60:  mov    %eax,%edx
084b78e2 +0x62:  mov    0xc(%ebp),%eax
084b78e5 +0x65:  mov    %edx,0x4(%esp)
084b78e9 +0x69:  mov    %eax,(%esp)
084b78ec +0x6c:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084b78f1 +0x71:  mov    0x8(%ebp),%eax
084b78f4 +0x74:  add    $0x8,%eax
084b78f7 +0x77:  mov    %eax,(%esp)
084b78fa +0x7a:  call   0807e3b0 <_init+0xca8>
084b78ff +0x7f:  mov    %eax,%edx
084b7901 +0x81:  mov    0x8(%ebp),%eax
084b7904 +0x84:  lea    0x8(%eax),%ecx
084b7907 +0x87:  mov    0xc(%ebp),%eax
084b790a +0x8a:  mov    %edx,0x8(%esp)
084b790e +0x8e:  mov    %ecx,0x4(%esp)
084b7912 +0x92:  mov    %eax,(%esp)
084b7915 +0x95:  call   0822b770 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe1a
084b791a +0x9a:  mov    0x8(%ebp),%eax
084b791d +0x9d:  mov    0x28(%eax),%edx
084b7920 +0xa0:  mov    0xc(%ebp),%eax
084b7923 +0xa3:  mov    %edx,0x4(%esp)
084b7927 +0xa7:  mov    %eax,(%esp)
084b792a +0xaa:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084b792f +0xaf:  leave
084b7930 +0xb0:  ret
084b7931 +0xb1:  nop
```

## 反编译 C

```c
// CGlobalEffect::makeNotifyInfo @ 0x84b7880

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CGlobalEffect::makeNotifyInfo(PacketGuard&) const */

void __thiscall CGlobalEffect::makeNotifyInfo(CGlobalEffect *this,PacketGuard *param_1)

{
  size_t sVar1;
  
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)this);
  InterfacePacketBuf::put_int
            ((InterfacePacketBuf *)param_1,(int)ROUND(_DAT_08c854b0 * *(float *)(this + 4)));
  sVar1 = strlen((char *)(this + 8));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,sVar1);
  sVar1 = strlen((char *)(this + 8));
  InterfacePacketBuf::put_str((InterfacePacketBuf *)param_1,(char *)(this + 8),sVar1);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(this + 0x28));
  return;
}
```
