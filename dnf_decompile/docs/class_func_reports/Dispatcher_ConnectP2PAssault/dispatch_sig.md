# dispatch_sig

`_ZN28Dispatcher_ConnectP2PAssault12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_ConnectP2PAssault::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ConnectP2PAssault` | `0x08206fea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08206fea  _ZN28Dispatcher_ConnectP2PAssault12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_ConnectP2PAssault::dispatch_sig(CUser*, PacketBuf&)
# range [0x08206fea, 0x08207207]
08206fea +0x000:  push   %ebp
08206feb +0x001:  mov    %esp,%ebp
08206fed +0x003:  push   %ebx
08206fee +0x004:  sub    $0x24,%esp
08206ff1 +0x007:  mov    0xc(%ebp),%eax
08206ff4 +0x00a:  mov    %eax,(%esp)
08206ff7 +0x00d:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08206ffc +0x012:  cmp    $0x1,%eax
08206fff +0x015:  setle  %al
08207002 +0x018:  test   %al,%al
08207004 +0x01a:  je     0820702f <+0x45>
08207006 +0x01c:  movl   $0x0,0xc(%esp)
0820700e +0x024:  movl   $0x0,0x8(%esp)
08207016 +0x02c:  movl   $&_ZZN28Dispatcher_ConnectP2PAssault12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820701e +0x034:  movl   $0xa1b0,(%esp)
08207025 +0x03b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820702a +0x040:  jmp    08207201 <+0x217>
0820702f +0x045:  movb   $0xff,-0xd(%ebp)
08207033 +0x049:  lea    -0xd(%ebp),%eax
08207036 +0x04c:  mov    %eax,0x4(%esp)
0820703a +0x050:  mov    0x10(%ebp),%eax
0820703d +0x053:  mov    %eax,(%esp)
08207040 +0x056:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
08207045 +0x05b:  xor    $0x1,%eax
08207048 +0x05e:  test   %al,%al
0820704a +0x060:  je     08207075 <+0x8b>
0820704c +0x062:  movl   $0x0,0xc(%esp)
08207054 +0x06a:  movl   $0x0,0x8(%esp)
0820705c +0x072:  movl   $&_ZZN28Dispatcher_ConnectP2PAssault12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08207064 +0x07a:  movl   $0xa1b4,(%esp)
0820706b +0x081:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08207070 +0x086:  jmp    08207201 <+0x217>
08207075 +0x08b:  movzbl -0xd(%ebp),%eax
08207079 +0x08f:  cmp    $0x8,%al
0820707b +0x091:  jg     08207085 <+0x9b>
0820707d +0x093:  movzbl -0xd(%ebp),%eax
08207081 +0x097:  test   %al,%al
08207083 +0x099:  jns    082070ae <+0xc4>
08207085 +0x09b:  movl   $0x0,0xc(%esp)
0820708d +0x0a3:  movl   $0x0,0x8(%esp)
08207095 +0x0ab:  movl   $&_ZZN28Dispatcher_ConnectP2PAssault12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820709d +0x0b3:  movl   $0xa1b8,(%esp)
082070a4 +0x0ba:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082070a9 +0x0bf:  jmp    08207201 <+0x217>
082070ae +0x0c4:  movl   $0x0,-0x15(%ebp)
082070b5 +0x0cb:  movl   $0x0,-0x11(%ebp)
082070bc +0x0d2:  movb   $0xff,-0x16(%ebp)
082070c0 +0x0d6:  movl   $0x0,-0xc(%ebp)
082070c7 +0x0dd:  jmp    08207194 <+0x1aa>
082070cc +0x0e2:  lea    -0x16(%ebp),%eax
082070cf +0x0e5:  mov    %eax,0x4(%esp)
082070d3 +0x0e9:  mov    0x10(%ebp),%eax
082070d6 +0x0ec:  mov    %eax,(%esp)
082070d9 +0x0ef:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
082070de +0x0f4:  xor    $0x1,%eax
082070e1 +0x0f7:  test   %al,%al
082070e3 +0x0f9:  je     0820710e <+0x124>
082070e5 +0x0fb:  movl   $0x0,0xc(%esp)
082070ed +0x103:  movl   $0x0,0x8(%esp)
082070f5 +0x10b:  movl   $&_ZZN28Dispatcher_ConnectP2PAssault12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082070fd +0x113:  movl   $0xa1bf,(%esp)
08207104 +0x11a:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08207109 +0x11f:  jmp    08207201 <+0x217>
0820710e +0x124:  movzbl -0x16(%ebp),%eax
08207112 +0x128:  cmp    $0x7,%al
08207114 +0x12a:  jg     0820711e <+0x134>
08207116 +0x12c:  movzbl -0x16(%ebp),%eax
0820711a +0x130:  test   %al,%al
0820711c +0x132:  jns    08207147 <+0x15d>
0820711e +0x134:  movl   $0x0,0xc(%esp)
08207126 +0x13c:  movl   $0x0,0x8(%esp)
0820712e +0x144:  movl   $&_ZZN28Dispatcher_ConnectP2PAssault12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08207136 +0x14c:  movl   $0xa1c2,(%esp)
0820713d +0x153:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08207142 +0x158:  jmp    08207201 <+0x217>
08207147 +0x15d:  movzbl -0x16(%ebp),%eax
0820714b +0x161:  movsbl %al,%eax
0820714e +0x164:  lea    -0x15(%ebp),%edx
08207151 +0x167:  lea    (%edx,%eax,1),%eax
08207154 +0x16a:  mov    %eax,0x4(%esp)
08207158 +0x16e:  mov    0x10(%ebp),%eax
0820715b +0x171:  mov    %eax,(%esp)
0820715e +0x174:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
08207163 +0x179:  xor    $0x1,%eax
08207166 +0x17c:  test   %al,%al
08207168 +0x17e:  je     08207190 <+0x1a6>
0820716a +0x180:  movl   $0x0,0xc(%esp)
08207172 +0x188:  movl   $0x0,0x8(%esp)
0820717a +0x190:  movl   $&_ZZN28Dispatcher_ConnectP2PAssault12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08207182 +0x198:  movl   $0xa1c5,(%esp)
08207189 +0x19f:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820718e +0x1a4:  jmp    08207201 <+0x217>
08207190 +0x1a6:  addl   $0x1,-0xc(%ebp)
08207194 +0x1aa:  movzbl -0xd(%ebp),%eax
08207198 +0x1ae:  movsbl %al,%eax
0820719b +0x1b1:  cmp    -0xc(%ebp),%eax
0820719e +0x1b4:  setg   %al
082071a1 +0x1b7:  test   %al,%al
082071a3 +0x1b9:  jne    082070cc <+0xe2>
082071a9 +0x1bf:  movzbl -0xd(%ebp),%eax
082071ad +0x1c3:  movsbl %al,%ebx
082071b0 +0x1c6:  call   082350a0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa74a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa74a
082071b5 +0x1cb:  mov    %ebx,0xc(%esp)
082071b9 +0x1cf:  lea    -0x15(%ebp),%edx
082071bc +0x1d2:  mov    %edx,0x8(%esp)
082071c0 +0x1d6:  mov    0xc(%ebp),%edx
082071c3 +0x1d9:  mov    %edx,0x4(%esp)
082071c7 +0x1dd:  mov    %eax,(%esp)
082071ca +0x1e0:  call   082ef27a <_ZN11pvp_assault11CAssaultMgr12OnConnectP2PEP5CUserPci>  ; pvp_assault::CAssaultMgr::OnConnectP2P(CUser*, char*, int)
082071cf +0x1e5:  xor    $0x1,%eax
082071d2 +0x1e8:  test   %al,%al
082071d4 +0x1ea:  je     082071fc <+0x212>
082071d6 +0x1ec:  movl   $0x0,0xc(%esp)
082071de +0x1f4:  movl   $0x0,0x8(%esp)
082071e6 +0x1fc:  movl   $&_ZZN28Dispatcher_ConnectP2PAssault12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082071ee +0x204:  movl   $0xa1cb,(%esp)
082071f5 +0x20b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082071fa +0x210:  jmp    08207201 <+0x217>
082071fc +0x212:  mov    $0x0,%eax
08207201 +0x217:  add    $0x24,%esp
08207204 +0x21a:  pop    %ebx
08207205 +0x21b:  pop    %ebp
08207206 +0x21c:  ret
08207207 +0x21d:  nop
```

## 反编译 C

```c
// Dispatcher_ConnectP2PAssault::dispatch_sig @ 0x8206fea

/* Dispatcher_ConnectP2PAssault::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_ConnectP2PAssault::dispatch_sig
          (Dispatcher_ConnectP2PAssault *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  CUser *pCVar4;
  char local_1a;
  char local_19 [9];
  int local_10;
  
  iVar2 = CUser::get_state(param_1);
  if (iVar2 < 2) {
    uVar3 = LineFunc(0xa1b0,
                     "virtual int Dispatcher_ConnectP2PAssault::dispatch_sig(CUser*, PacketBuf&)",0,
                     0);
  }
  else {
    local_19[8] = -1;
    cVar1 = PacketBuf::get_byte(param_2,local_19 + 8);
    if (cVar1 == '\x01') {
      if ((local_19[8] < '\t') && (-1 < local_19[8])) {
        local_19[0] = '\0';
        local_19[1] = '\0';
        local_19[2] = '\0';
        local_19[3] = '\0';
        local_19[4] = '\0';
        local_19[5] = '\0';
        local_19[6] = '\0';
        local_19[7] = '\0';
        local_1a = -1;
        for (local_10 = 0; local_10 < local_19[8]; local_10 = local_10 + 1) {
          cVar1 = PacketBuf::get_byte(param_2,&local_1a);
          if (cVar1 != '\x01') {
            uVar3 = LineFunc(0xa1bf,
                             "virtual int Dispatcher_ConnectP2PAssault::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
            return uVar3;
          }
          if (('\a' < local_1a) || (local_1a < '\0')) {
            uVar3 = LineFunc(0xa1c2,
                             "virtual int Dispatcher_ConnectP2PAssault::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
            return uVar3;
          }
          cVar1 = PacketBuf::get_byte(param_2,local_19 + local_1a);
          if (cVar1 != '\x01') {
            uVar3 = LineFunc(0xa1c5,
                             "virtual int Dispatcher_ConnectP2PAssault::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
            return uVar3;
          }
        }
        pCVar4 = (CUser *)pvp_assault::GetInstanceAssaultMgr();
        cVar1 = pvp_assault::CAssaultMgr::OnConnectP2P(pCVar4,(char *)param_1,(int)local_19);
        if (cVar1 == '\x01') {
          uVar3 = 0;
        }
        else {
          uVar3 = LineFunc(0xa1cb,
                           "virtual int Dispatcher_ConnectP2PAssault::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
        }
      }
      else {
        uVar3 = LineFunc(0xa1b8,
                         "virtual int Dispatcher_ConnectP2PAssault::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
      }
    }
    else {
      uVar3 = LineFunc(0xa1b4,
                       "virtual int Dispatcher_ConnectP2PAssault::dispatch_sig(CUser*, PacketBuf&)",
                       0,0);
    }
  }
  return uVar3;
}
```
