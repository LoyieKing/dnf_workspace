# dispatch_sig

`_ZN29Dispatcher_Antibot_DPCallBack12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_Antibot_DPCallBack::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Antibot_DPCallBack` | `0x0820b17a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0820b17a  _ZN29Dispatcher_Antibot_DPCallBack12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_Antibot_DPCallBack::dispatch_sig(CUser*, PacketBuf&)
# range [0x0820b17a, 0x0820b321]
0820b17a +0x000:  push   %ebp
0820b17b +0x001:  mov    %esp,%ebp
0820b17d +0x003:  push   %esi
0820b17e +0x004:  push   %ebx
0820b17f +0x005:  sub    $0xb20,%esp
0820b185 +0x00b:  mov    0xc(%ebp),%eax
0820b188 +0x00e:  movzbl 0x8d252(%eax),%eax
0820b18f +0x015:  cmp    $0x4,%al
0820b191 +0x017:  ja     0820b1a9 <+0x2f>
0820b193 +0x019:  mov    0xc(%ebp),%eax
0820b196 +0x01c:  movzbl 0x8d252(%eax),%eax
0820b19d +0x023:  lea    0x1(%eax),%edx
0820b1a0 +0x026:  mov    0xc(%ebp),%eax
0820b1a3 +0x029:  mov    %dl,0x8d252(%eax)
0820b1a9 +0x02f:  lea    -0x14(%ebp),%eax
0820b1ac +0x032:  mov    %eax,0x4(%esp)
0820b1b0 +0x036:  mov    0x10(%ebp),%eax
0820b1b3 +0x039:  mov    %eax,(%esp)
0820b1b6 +0x03c:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
0820b1bb +0x041:  xor    $0x1,%eax
0820b1be +0x044:  test   %al,%al
0820b1c0 +0x046:  je     0820b214 <+0x9a>
0820b1c2 +0x048:  mov    0xc(%ebp),%eax
0820b1c5 +0x04b:  movzbl 0x8d252(%eax),%eax
0820b1cc +0x052:  cmp    $0x5,%al
0820b1ce +0x054:  ja     0820b20a <+0x90>
0820b1d0 +0x056:  mov    0xc(%ebp),%eax
0820b1d3 +0x059:  movzbl 0x8d252(%eax),%eax
0820b1da +0x060:  movzbl %al,%eax
0820b1dd +0x063:  mov    0xc(%ebp),%edx
0820b1e0 +0x066:  add    $0x79700,%edx
0820b1e6 +0x06c:  movl   $0x0,0x10(%esp)
0820b1ee +0x074:  mov    %eax,0xc(%esp)
0820b1f2 +0x078:  movl   $0x25d,0x8(%esp)
0820b1fa +0x080:  movl   $0x1,0x4(%esp)
0820b202 +0x088:  mov    %edx,(%esp)
0820b205 +0x08b:  call   08686df4 <_ZN15cUserHistoryLog12AbnormalUserE27ENUM_ABNORMAL_USER_LOG_TYPEtii>  ; cUserHistoryLog::AbnormalUser(ENUM_ABNORMAL_USER_LOG_TYPE, unsigned short, int, int)
0820b20a +0x090:  mov    $0xa76a,%eax
0820b20f +0x095:  jmp    0820b318 <+0x19e>
0820b214 +0x09a:  movl   $0xd,-0x10(%ebp)
0820b21b +0x0a1:  mov    -0x14(%ebp),%eax
0820b21e +0x0a4:  cmp    $0x567,%eax
0820b223 +0x0a9:  jbe    0820b297 <+0x11d>
0820b225 +0x0ab:  mov    0xc(%ebp),%eax
0820b228 +0x0ae:  movzbl 0x8d252(%eax),%eax
0820b22f +0x0b5:  cmp    $0x5,%al
0820b231 +0x0b7:  ja     0820b26e <+0xf4>
0820b233 +0x0b9:  mov    -0x14(%ebp),%eax
0820b236 +0x0bc:  mov    %eax,%edx
0820b238 +0x0be:  mov    0xc(%ebp),%eax
0820b23b +0x0c1:  movzbl 0x8d252(%eax),%eax
0820b242 +0x0c8:  movzbl %al,%eax
0820b245 +0x0cb:  mov    0xc(%ebp),%ecx
0820b248 +0x0ce:  add    $0x79700,%ecx
0820b24e +0x0d4:  mov    %edx,0x10(%esp)
0820b252 +0x0d8:  mov    %eax,0xc(%esp)
0820b256 +0x0dc:  movl   $0x25d,0x8(%esp)
0820b25e +0x0e4:  movl   $0x2,0x4(%esp)
0820b266 +0x0ec:  mov    %ecx,(%esp)
0820b269 +0x0ef:  call   08686df4 <_ZN15cUserHistoryLog12AbnormalUserE27ENUM_ABNORMAL_USER_LOG_TYPEtii>  ; cUserHistoryLog::AbnormalUser(ENUM_ABNORMAL_USER_LOG_TYPE, unsigned short, int, int)
0820b26e +0x0f4:  movl   $0x0,0xc(%esp)
0820b276 +0x0fc:  movl   $0x0,0x8(%esp)
0820b27e +0x104:  movl   $&_ZZN29Dispatcher_Antibot_DPCallBack12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820b286 +0x10c:  movl   $0xa780,(%esp)
0820b28d +0x113:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820b292 +0x118:  jmp    0820b318 <+0x19e>
0820b297 +0x11d:  movw   $0xaf0,-0x16(%ebp)
0820b29d +0x123:  mov    0x10(%ebp),%eax
0820b2a0 +0x126:  mov    %eax,(%esp)
0820b2a3 +0x129:  call   08110b1c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x2e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x2e
0820b2a8 +0x12e:  mov    %eax,0x4(%esp)
0820b2ac +0x132:  mov    0x10(%ebp),%eax
0820b2af +0x135:  mov    %eax,(%esp)
0820b2b2 +0x138:  call   0858da38 <_ZN9PacketBuf11get_buf_ptrEi>  ; PacketBuf::get_buf_ptr(int)
0820b2b7 +0x13d:  mov    %eax,-0xc(%ebp)
0820b2ba +0x140:  mov    &_ZN10GlobalData17s_antibotChecker_E,%eax
0820b2bf +0x145:  mov    (%eax),%eax
0820b2c1 +0x147:  add    $0x2c,%eax
0820b2c4 +0x14a:  mov    (%eax),%esi
0820b2c6 +0x14c:  mov    -0x14(%ebp),%eax
0820b2c9 +0x14f:  movzwl %ax,%ebx
0820b2cc +0x152:  mov    0xc(%ebp),%eax
0820b2cf +0x155:  mov    %eax,(%esp)
0820b2d2 +0x158:  call   0822fce4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x538e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x538e
0820b2d7 +0x15d:  mov    %eax,%edx
0820b2d9 +0x15f:  mov    &_ZN10GlobalData17s_antibotChecker_E,%eax
0820b2de +0x164:  lea    -0x16(%ebp),%ecx
0820b2e1 +0x167:  mov    %ecx,0x14(%esp)
0820b2e5 +0x16b:  lea    -0xb06(%ebp),%ecx
0820b2eb +0x171:  mov    %ecx,0x10(%esp)
0820b2ef +0x175:  mov    %ebx,0xc(%esp)
0820b2f3 +0x179:  mov    -0xc(%ebp),%ecx
0820b2f6 +0x17c:  mov    %ecx,0x8(%esp)
0820b2fa +0x180:  mov    %edx,0x4(%esp)
0820b2fe +0x184:  mov    %eax,(%esp)
0820b301 +0x187:  call   *%esi
0820b303 +0x189:  test   %eax,%eax
0820b305 +0x18b:  setne  %al
0820b308 +0x18e:  test   %al,%al
0820b30a +0x190:  je     0820b313 <+0x199>
0820b30c +0x192:  mov    $0x0,%eax
0820b311 +0x197:  jmp    0820b318 <+0x19e>
0820b313 +0x199:  mov    $0x0,%eax
0820b318 +0x19e:  add    $0xb20,%esp
0820b31e +0x1a4:  pop    %ebx
0820b31f +0x1a5:  pop    %esi
0820b320 +0x1a6:  pop    %ebp
0820b321 +0x1a7:  ret
```

## 反编译 C

```c
// Dispatcher_Antibot_DPCallBack::dispatch_sig @ 0x820b17a

/* Dispatcher_Antibot_DPCallBack::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_Antibot_DPCallBack::dispatch_sig
          (Dispatcher_Antibot_DPCallBack *this,CUser *param_1,PacketBuf *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 local_b0a [2800];
  undefined2 local_1a;
  uint local_18 [3];
  
  if ((byte)param_1[0x8d252] < 5) {
    param_1[0x8d252] = (CUser)((char)param_1[0x8d252] + '\x01');
  }
  cVar2 = PacketBuf::get_int(param_2,local_18);
  if (cVar2 == '\x01') {
    local_18[1] = 0xd;
    if (local_18[0] < 0x568) {
      local_1a = 0xaf0;
      iVar4 = PacketBuf::get_index(param_2);
      local_18[2] = PacketBuf::get_buf_ptr(param_2,iVar4);
      pcVar1 = *(code **)(*GlobalData::s_antibotChecker_ + 0x2c);
      uVar3 = CUser::getAntibotKey(param_1);
      iVar4 = (*pcVar1)(GlobalData::s_antibotChecker_,uVar3,local_18[2],local_18[0] & 0xffff,
                        local_b0a,&local_1a);
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      if ((byte)param_1[0x8d252] < 6) {
        cUserHistoryLog::AbnormalUser
                  ((cUserHistoryLog *)(param_1 + 0x79700),2,0x25d,param_1[0x8d252],local_18[0]);
      }
      uVar3 = LineFunc(0xa780,
                       "virtual int Dispatcher_Antibot_DPCallBack::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
    }
  }
  else {
    if ((byte)param_1[0x8d252] < 6) {
      cUserHistoryLog::AbnormalUser
                ((cUserHistoryLog *)(param_1 + 0x79700),1,0x25d,param_1[0x8d252],0);
    }
    uVar3 = 0xa76a;
  }
  return uVar3;
}
```
