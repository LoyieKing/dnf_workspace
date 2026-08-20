# OnLeaveAssaultPlace

`_ZN11pvp_assault11CAssaultMgr19OnLeaveAssaultPlaceEP5CUserb`

`pvp_assault::CAssaultMgr::OnLeaveAssaultPlace(CUser*, bool)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultMgr` | `0x082ef176` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082ef176  _ZN11pvp_assault11CAssaultMgr19OnLeaveAssaultPlaceEP5CUserb
#           pvp_assault::CAssaultMgr::OnLeaveAssaultPlace(CUser*, bool)
# range [0x082ef176, 0x082ef1e1]
082ef176 +0x00:  push   %ebp
082ef177 +0x01:  mov    %esp,%ebp
082ef179 +0x03:  sub    $0x38,%esp
082ef17c +0x06:  mov    0x10(%ebp),%eax
082ef17f +0x09:  mov    %al,-0x1c(%ebp)
082ef182 +0x0c:  mov    0xc(%ebp),%eax
082ef185 +0x0f:  mov    %eax,(%esp)
082ef188 +0x12:  call   0822f6d2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4d7c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4d7c
082ef18d +0x17:  mov    %eax,0x4(%esp)
082ef191 +0x1b:  mov    0x8(%ebp),%eax
082ef194 +0x1e:  mov    %eax,(%esp)
082ef197 +0x21:  call   082ed9fe <_ZN11pvp_assault11CAssaultMgr16_GetAssaultPlaceEj>  ; pvp_assault::CAssaultMgr::_GetAssaultPlace(unsigned int)
082ef19c +0x26:  mov    %eax,-0x10(%ebp)
082ef19f +0x29:  movzbl -0x1c(%ebp),%eax
082ef1a3 +0x2d:  mov    %eax,0x8(%esp)
082ef1a7 +0x31:  mov    0xc(%ebp),%eax
082ef1aa +0x34:  mov    %eax,0x4(%esp)
082ef1ae +0x38:  mov    -0x10(%ebp),%eax
082ef1b1 +0x3b:  mov    %eax,(%esp)
082ef1b4 +0x3e:  call   082eb450 <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEP5CUserb>  ; pvp_assault::CAssaultPlace::LeaveAssaultPlace(CUser*, bool)
082ef1b9 +0x43:  jmp    082ef1da <+0x64>
082ef1bb +0x45:  cmp    $0x1,%edx
082ef1be +0x48:  je     082ef1c8 <+0x52>
082ef1c0 +0x4a:  mov    %eax,(%esp)
082ef1c3 +0x4d:  call   08ae3750 <_Unwind_Resume>
082ef1c8 +0x52:  mov    %eax,(%esp)
082ef1cb +0x55:  call   08725ce0 <__cxa_begin_catch>
082ef1d0 +0x5a:  mov    (%eax),%eax
082ef1d2 +0x5c:  mov    %eax,-0xc(%ebp)
082ef1d5 +0x5f:  call   08725c30 <__cxa_end_catch>
082ef1da +0x64:  mov    $0x1,%eax
082ef1df +0x69:  leave
082ef1e0 +0x6a:  ret
082ef1e1 +0x6b:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultMgr::OnLeaveAssaultPlace @ 0x82ef176

/* pvp_assault::CAssaultMgr::OnLeaveAssaultPlace(CUser*, bool) */

undefined4 __thiscall
pvp_assault::CAssaultMgr::OnLeaveAssaultPlace(CAssaultMgr *this,CUser *param_1,bool param_2)

{
  CAssaultPlace *this_00;
  
  CUserCharacInfo::GetAssaultPlace((CUserCharacInfo *)param_1);
                    /* try { // try from 082ef197 to 082ef1b8 has its CatchHandler @ 082ef1bb */
  this_00 = (CAssaultPlace *)_GetAssaultPlace((uint)this);
  CAssaultPlace::LeaveAssaultPlace(this_00,param_1,param_2);
  return 1;
}
```
