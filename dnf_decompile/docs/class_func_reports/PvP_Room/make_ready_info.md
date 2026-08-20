# make_ready_info

`_ZN8PvP_Room15make_ready_infoEPci`

`PvP_Room::make_ready_info(char*, int)`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085dbcce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085dbcce  _ZN8PvP_Room15make_ready_infoEPci
#           PvP_Room::make_ready_info(char*, int)
# range [0x085dbcce, 0x085dbd39]
085dbcce +0x00:  push   %ebp
085dbccf +0x01:  mov    %esp,%ebp
085dbcd1 +0x03:  sub    $0x28,%esp
085dbcd4 +0x06:  mov    0xc(%ebp),%eax
085dbcd7 +0x09:  mov    %eax,-0xc(%ebp)
085dbcda +0x0c:  mov    -0xc(%ebp),%eax
085dbcdd +0x0f:  movl   $0x2c,0x8(%esp)
085dbce5 +0x17:  movl   $0x0,0x4(%esp)
085dbced +0x1f:  mov    %eax,(%esp)
085dbcf0 +0x22:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085dbcf5 +0x27:  mov    -0xc(%ebp),%eax
085dbcf8 +0x2a:  mov    0x10(%ebp),%edx
085dbcfb +0x2d:  mov    %edx,0x4(%esp)
085dbcff +0x31:  mov    %eax,(%esp)
085dbd02 +0x34:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085dbd07 +0x39:  mov    0x10(%ebp),%eax
085dbd0a +0x3c:  mov    0x8(%ebp),%edx
085dbd0d +0x3f:  movzbl 0x70(%edx,%eax,1),%eax
085dbd12 +0x44:  movzbl %al,%edx
085dbd15 +0x47:  mov    -0xc(%ebp),%eax
085dbd18 +0x4a:  mov    %edx,0x4(%esp)
085dbd1c +0x4e:  mov    %eax,(%esp)
085dbd1f +0x51:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085dbd24 +0x56:  mov    -0xc(%ebp),%eax
085dbd27 +0x59:  movl   $0x1,0x4(%esp)
085dbd2f +0x61:  mov    %eax,(%esp)
085dbd32 +0x64:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085dbd37 +0x69:  leave
085dbd38 +0x6a:  ret
085dbd39 +0x6b:  nop
```

## 反编译 C

```c
// PvP_Room::make_ready_info @ 0x85dbcce

/* PvP_Room::make_ready_info(char*, int) */

void __thiscall PvP_Room::make_ready_info(PvP_Room *this,char *param_1,int param_2)

{
  InterfacePacketBuf::put_header((InterfacePacketBuf *)param_1,0,0x2c);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,param_2);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(uint)(byte)this[param_2 + 0x70]);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)param_1,true);
  return;
}
```
