# make_state_info

`_ZN8PvP_Room15make_state_infoEPc`

`PvP_Room::make_state_info(char*)`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085dbd3a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085dbd3a  _ZN8PvP_Room15make_state_infoEPc
#           PvP_Room::make_state_info(char*)
# range [0x085dbd3a, 0x085dbe17]
085dbd3a +0x00:  push   %ebp
085dbd3b +0x01:  mov    %esp,%ebp
085dbd3d +0x03:  sub    $0x28,%esp
085dbd40 +0x06:  mov    0xc(%ebp),%eax
085dbd43 +0x09:  mov    %eax,-0xc(%ebp)
085dbd46 +0x0c:  mov    -0xc(%ebp),%eax
085dbd49 +0x0f:  movl   $0x2a,0x8(%esp)
085dbd51 +0x17:  movl   $0x0,0x4(%esp)
085dbd59 +0x1f:  mov    %eax,(%esp)
085dbd5c +0x22:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085dbd61 +0x27:  mov    0x8(%ebp),%eax
085dbd64 +0x2a:  mov    (%eax),%edx
085dbd66 +0x2c:  mov    -0xc(%ebp),%eax
085dbd69 +0x2f:  mov    %edx,0x4(%esp)
085dbd6d +0x33:  mov    %eax,(%esp)
085dbd70 +0x36:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085dbd75 +0x3b:  mov    0x8(%ebp),%eax
085dbd78 +0x3e:  mov    0xb8(%eax),%edx
085dbd7e +0x44:  mov    -0xc(%ebp),%eax
085dbd81 +0x47:  mov    %edx,0x4(%esp)
085dbd85 +0x4b:  mov    %eax,(%esp)
085dbd88 +0x4e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085dbd8d +0x53:  mov    0x8(%ebp),%eax
085dbd90 +0x56:  mov    0x2c(%eax),%edx
085dbd93 +0x59:  mov    -0xc(%ebp),%eax
085dbd96 +0x5c:  mov    %edx,0x4(%esp)
085dbd9a +0x60:  mov    %eax,(%esp)
085dbd9d +0x63:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085dbda2 +0x68:  mov    0x8(%ebp),%eax
085dbda5 +0x6b:  movzwl 0x5c4(%eax),%eax
085dbdac +0x72:  movswl %ax,%edx
085dbdaf +0x75:  mov    -0xc(%ebp),%eax
085dbdb2 +0x78:  mov    %edx,0x4(%esp)
085dbdb6 +0x7c:  mov    %eax,(%esp)
085dbdb9 +0x7f:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085dbdbe +0x84:  mov    0x8(%ebp),%eax
085dbdc1 +0x87:  mov    0x4(%eax),%eax
085dbdc4 +0x8a:  mov    %eax,%edx
085dbdc6 +0x8c:  mov    -0xc(%ebp),%eax
085dbdc9 +0x8f:  mov    %edx,0x4(%esp)
085dbdcd +0x93:  mov    %eax,(%esp)
085dbdd0 +0x96:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085dbdd5 +0x9b:  mov    0x8(%ebp),%eax
085dbdd8 +0x9e:  mov    0x6e4(%eax),%eax
085dbdde +0xa4:  mov    (%eax),%eax
085dbde0 +0xa6:  add    $0x8,%eax
085dbde3 +0xa9:  mov    (%eax),%edx
085dbde5 +0xab:  mov    0x8(%ebp),%eax
085dbde8 +0xae:  mov    0x6e4(%eax),%eax
085dbdee +0xb4:  mov    %eax,(%esp)
085dbdf1 +0xb7:  call   *%edx
085dbdf3 +0xb9:  mov    -0xc(%ebp),%edx
085dbdf6 +0xbc:  mov    %eax,0x4(%esp)
085dbdfa +0xc0:  mov    %edx,(%esp)
085dbdfd +0xc3:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085dbe02 +0xc8:  mov    -0xc(%ebp),%eax
085dbe05 +0xcb:  movl   $0x1,0x4(%esp)
085dbe0d +0xd3:  mov    %eax,(%esp)
085dbe10 +0xd6:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085dbe15 +0xdb:  leave
085dbe16 +0xdc:  ret
085dbe17 +0xdd:  nop
```

## 反编译 C

```c
// PvP_Room::make_state_info @ 0x85dbd3a

/* PvP_Room::make_state_info(char*) */

void __thiscall PvP_Room::make_state_info(PvP_Room *this,char *param_1)

{
  int iVar1;
  
  InterfacePacketBuf::put_header((InterfacePacketBuf *)param_1,0,0x2a);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,*(int *)this);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,*(int *)(this + 0xb8));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,*(int *)(this + 0x2c));
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,(int)*(short *)(this + 0x5c4));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,*(int *)(this + 4));
  iVar1 = (**(code **)(**(int **)(this + 0x6e4) + 8))(*(undefined4 *)(this + 0x6e4));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,iVar1);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)param_1,true);
  return;
}
```
