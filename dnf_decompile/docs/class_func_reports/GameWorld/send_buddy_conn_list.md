# send_buddy_conn_list

`_ZN9GameWorld20send_buddy_conn_listEjP9BuddyListi`

`GameWorld::send_buddy_conn_list(unsigned int, BuddyList*, int)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086c8694` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c8694  _ZN9GameWorld20send_buddy_conn_listEjP9BuddyListi
#           GameWorld::send_buddy_conn_list(unsigned int, BuddyList*, int)
# range [0x086c8694, 0x086c8789]
086c8694 +0x00:  push   %ebp
086c8695 +0x01:  mov    %esp,%ebp
086c8697 +0x03:  push   %esi
086c8698 +0x04:  push   %ebx
086c8699 +0x05:  sub    $0x30,%esp
086c869c +0x08:  mov    0x10(%ebp),%eax
086c869f +0x0b:  mov    %eax,-0x10(%ebp)
086c86a2 +0x0e:  mov    0x14(%ebp),%eax
086c86a5 +0x11:  mov    %eax,-0xc(%ebp)
086c86a8 +0x14:  mov    0xc(%ebp),%eax
086c86ab +0x17:  mov    %eax,0x4(%esp)
086c86af +0x1b:  mov    0x8(%ebp),%eax
086c86b2 +0x1e:  mov    %eax,(%esp)
086c86b5 +0x21:  call   086c4d40 <_ZN9GameWorld28find_user_from_world_byaccidEj>  ; GameWorld::find_user_from_world_byaccid(unsigned int)
086c86ba +0x26:  mov    %eax,-0x14(%ebp)
086c86bd +0x29:  cmpl   $0x0,-0x14(%ebp)
086c86c1 +0x2d:  sete   %al
086c86c4 +0x30:  test   %al,%al
086c86c6 +0x32:  jne    086c8782 <+0xee>
086c86cc +0x38:  lea    -0x20(%ebp),%eax
086c86cf +0x3b:  mov    %eax,(%esp)
086c86d2 +0x3e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086c86d7 +0x43:  movl   $0x38,0x8(%esp)
086c86df +0x4b:  movl   $0x0,0x4(%esp)
086c86e7 +0x53:  lea    -0x20(%ebp),%eax
086c86ea +0x56:  mov    %eax,(%esp)
086c86ed +0x59:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086c86f2 +0x5e:  mov    0x14(%ebp),%eax
086c86f5 +0x61:  mov    %eax,0x4(%esp)
086c86f9 +0x65:  lea    -0x20(%ebp),%eax
086c86fc +0x68:  mov    %eax,(%esp)
086c86ff +0x6b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c8704 +0x70:  jmp    086c8724 <+0x90>
086c8706 +0x72:  mov    -0x10(%ebp),%eax
086c8709 +0x75:  movl   $0x2a,0x8(%esp)
086c8711 +0x7d:  mov    %eax,0x4(%esp)
086c8715 +0x81:  lea    -0x20(%ebp),%eax
086c8718 +0x84:  mov    %eax,(%esp)
086c871b +0x87:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
086c8720 +0x8c:  addl   $0x2a,-0x10(%ebp)
086c8724 +0x90:  cmpl   $0x0,-0xc(%ebp)
086c8728 +0x94:  setne  %al
086c872b +0x97:  subl   $0x1,-0xc(%ebp)
086c872f +0x9b:  test   %al,%al
086c8731 +0x9d:  jne    086c8706 <+0x72>
086c8733 +0x9f:  movl   $0x1,0x4(%esp)
086c873b +0xa7:  lea    -0x20(%ebp),%eax
086c873e +0xaa:  mov    %eax,(%esp)
086c8741 +0xad:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086c8746 +0xb2:  lea    -0x20(%ebp),%eax
086c8749 +0xb5:  mov    %eax,0x4(%esp)
086c874d +0xb9:  mov    -0x14(%ebp),%eax
086c8750 +0xbc:  mov    %eax,(%esp)
086c8753 +0xbf:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086c8758 +0xc4:  jmp    086c8775 <+0xe1>
086c875a +0xc6:  mov    %edx,%ebx
086c875c +0xc8:  mov    %eax,%esi
086c875e +0xca:  lea    -0x20(%ebp),%eax
086c8761 +0xcd:  mov    %eax,(%esp)
086c8764 +0xd0:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086c8769 +0xd5:  mov    %esi,%eax
086c876b +0xd7:  mov    %ebx,%edx
086c876d +0xd9:  mov    %eax,(%esp)
086c8770 +0xdc:  call   08ae3750 <_Unwind_Resume>
086c8775 +0xe1:  lea    -0x20(%ebp),%eax
086c8778 +0xe4:  mov    %eax,(%esp)
086c877b +0xe7:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086c8780 +0xec:  jmp    086c8783 <+0xef>
086c8782 +0xee:  nop
086c8783 +0xef:  add    $0x30,%esp
086c8786 +0xf2:  pop    %ebx
086c8787 +0xf3:  pop    %esi
086c8788 +0xf4:  pop    %ebp
086c8789 +0xf5:  ret
```

## 反编译 C

```c
// GameWorld::send_buddy_conn_list @ 0x86c8694

/* GameWorld::send_buddy_conn_list(unsigned int, BuddyList*, int) */

void __thiscall
GameWorld::send_buddy_conn_list(GameWorld *this,uint param_1,BuddyList *param_2,int param_3)

{
  bool bVar1;
  PacketGuard local_24 [12];
  CUser *local_18;
  BuddyList *local_14;
  int local_10;
  
  local_14 = param_2;
  local_10 = param_3;
  local_18 = (CUser *)find_user_from_world_byaccid(this,param_1);
  if (local_18 != (CUser *)0x0) {
    PacketGuard::PacketGuard(local_24);
                    /* try { // try from 086c86ed to 086c8757 has its CatchHandler @ 086c875a */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0x38);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,param_3);
    while (bVar1 = local_10 != 0, local_10 = local_10 + -1, bVar1) {
      InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_24,(char *)local_14,0x2a);
      local_14 = local_14 + 0x2a;
    }
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
    CUser::Send(local_18,local_24);
    PacketGuard::~PacketGuard(local_24);
  }
  return;
}
```
