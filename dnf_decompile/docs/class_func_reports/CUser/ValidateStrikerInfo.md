# ValidateStrikerInfo

`_ZN5CUser19ValidateStrikerInfoEv`

`CUser::ValidateStrikerInfo()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08690be6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08690be6  _ZN5CUser19ValidateStrikerInfoEv
#           CUser::ValidateStrikerInfo()
# range [0x08690be6, 0x08690d99]
08690be6 +0x000:  push   %ebp
08690be7 +0x001:  mov    %esp,%ebp
08690be9 +0x003:  push   %edi
08690bea +0x004:  push   %esi
08690beb +0x005:  push   %ebx
08690bec +0x006:  sub    $0x2c,%esp
08690bef +0x009:  movl   $0x0,-0x20(%ebp)
08690bf6 +0x010:  jmp    08690d73 <+0x18d>
08690bfb +0x015:  mov    -0x20(%ebp),%eax
08690bfe +0x018:  mov    0x8(%ebp),%edx
08690c01 +0x01b:  add    $0x796e8,%edx
08690c07 +0x021:  mov    %eax,0x4(%esp)
08690c0b +0x025:  mov    %edx,(%esp)
08690c0e +0x028:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
08690c13 +0x02d:  mov    0x14b8(%eax),%eax
08690c19 +0x033:  test   %eax,%eax
08690c1b +0x035:  setne  %al
08690c1e +0x038:  test   %al,%al
08690c20 +0x03a:  je     08690d6f <+0x189>
08690c26 +0x040:  mov    -0x20(%ebp),%eax
08690c29 +0x043:  mov    0x8(%ebp),%edx
08690c2c +0x046:  add    $0x796e8,%edx
08690c32 +0x04c:  mov    %eax,0x4(%esp)
08690c36 +0x050:  mov    %edx,(%esp)
08690c39 +0x053:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
08690c3e +0x058:  mov    0x14b8(%eax),%eax
08690c44 +0x05e:  mov    %eax,0x4(%esp)
08690c48 +0x062:  mov    0x8(%ebp),%eax
08690c4b +0x065:  mov    %eax,(%esp)
08690c4e +0x068:  call   0864df12 <_ZNK5CUser14get_charac_idxEj>  ; CUser::get_charac_idx(unsigned int) const
08690c53 +0x06d:  mov    %eax,-0x1c(%ebp)
08690c56 +0x070:  cmpl   $0xffffffff,-0x1c(%ebp)
08690c5a +0x074:  jne    08690ca2 <+0xbc>
08690c5c +0x076:  mov    -0x20(%ebp),%eax
08690c5f +0x079:  mov    0x8(%ebp),%edx
08690c62 +0x07c:  add    $0x796e8,%edx
08690c68 +0x082:  mov    %eax,0x4(%esp)
08690c6c +0x086:  mov    %edx,(%esp)
08690c6f +0x089:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
08690c74 +0x08e:  movl   $0x0,0x14b8(%eax)
08690c7e +0x098:  mov    -0x20(%ebp),%eax
08690c81 +0x09b:  mov    0x8(%ebp),%edx
08690c84 +0x09e:  add    $0x796e8,%edx
08690c8a +0x0a4:  mov    %eax,0x4(%esp)
08690c8e +0x0a8:  mov    %edx,(%esp)
08690c91 +0x0ab:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
08690c96 +0x0b0:  movb   $0x0,0x14b7(%eax)
08690c9d +0x0b7:  jmp    08690d6f <+0x189>
08690ca2 +0x0bc:  mov    -0x20(%ebp),%eax
08690ca5 +0x0bf:  mov    0x8(%ebp),%edx
08690ca8 +0x0c2:  add    $0x796e8,%edx
08690cae +0x0c8:  mov    %eax,0x4(%esp)
08690cb2 +0x0cc:  mov    %edx,(%esp)
08690cb5 +0x0cf:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
08690cba +0x0d4:  movzbl 0x14b7(%eax),%eax
08690cc1 +0x0db:  movzbl %al,%edi
08690cc4 +0x0de:  mov    -0x1c(%ebp),%eax
08690cc7 +0x0e1:  mov    0x8(%ebp),%edx
08690cca +0x0e4:  add    $0x796e8,%edx
08690cd0 +0x0ea:  mov    %eax,0x4(%esp)
08690cd4 +0x0ee:  mov    %edx,(%esp)
08690cd7 +0x0f1:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
08690cdc +0x0f6:  movzbl 0x29(%eax),%eax
08690ce0 +0x0fa:  shl    $0x4,%eax
08690ce3 +0x0fd:  sar    $0x4,%al
08690ce6 +0x100:  movsbl %al,%esi
08690ce9 +0x103:  mov    -0x1c(%ebp),%eax
08690cec +0x106:  mov    0x8(%ebp),%edx
08690cef +0x109:  add    $0x796e8,%edx
08690cf5 +0x10f:  mov    %eax,0x4(%esp)
08690cf9 +0x113:  mov    %edx,(%esp)
08690cfc +0x116:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
08690d01 +0x11b:  movzbl 0x26(%eax),%eax
08690d05 +0x11f:  movsbl %al,%ebx
08690d08 +0x122:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08690d0d +0x127:  mov    0x6390(%eax),%eax
08690d13 +0x12d:  mov    %edi,0xc(%esp)
08690d17 +0x131:  mov    %esi,0x8(%esp)
08690d1b +0x135:  mov    %ebx,0x4(%esp)
08690d1f +0x139:  mov    %eax,(%esp)
08690d22 +0x13c:  call   08a9e868 <_ZN13StrikerScript15checkSkillIndexEssi>  ; StrikerScript::checkSkillIndex(short, short, int)
08690d27 +0x141:  xor    $0x1,%eax
08690d2a +0x144:  test   %al,%al
08690d2c +0x146:  je     08690d6f <+0x189>
08690d2e +0x148:  mov    -0x20(%ebp),%eax
08690d31 +0x14b:  mov    0x8(%ebp),%edx
08690d34 +0x14e:  add    $0x796e8,%edx
08690d3a +0x154:  mov    %eax,0x4(%esp)
08690d3e +0x158:  mov    %edx,(%esp)
08690d41 +0x15b:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
08690d46 +0x160:  movl   $0x0,0x14b8(%eax)
08690d50 +0x16a:  mov    -0x20(%ebp),%eax
08690d53 +0x16d:  mov    0x8(%ebp),%edx
08690d56 +0x170:  add    $0x796e8,%edx
08690d5c +0x176:  mov    %eax,0x4(%esp)
08690d60 +0x17a:  mov    %edx,(%esp)
08690d63 +0x17d:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
08690d68 +0x182:  movb   $0x0,0x14b7(%eax)
08690d6f +0x189:  addl   $0x1,-0x20(%ebp)
08690d73 +0x18d:  mov    0x8(%ebp),%eax
08690d76 +0x190:  add    $0x796e8,%eax
08690d7b +0x195:  mov    %eax,(%esp)
08690d7e +0x198:  call   081a0b9a <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x289>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x289
08690d83 +0x19d:  cmp    -0x20(%ebp),%eax
08690d86 +0x1a0:  setg   %al
08690d89 +0x1a3:  test   %al,%al
08690d8b +0x1a5:  jne    08690bfb <+0x15>
08690d91 +0x1ab:  add    $0x2c,%esp
08690d94 +0x1ae:  pop    %ebx
08690d95 +0x1af:  pop    %esi
08690d96 +0x1b0:  pop    %edi
08690d97 +0x1b1:  pop    %ebp
08690d98 +0x1b2:  ret
08690d99 +0x1b3:  nop
```

## 反编译 C

```c
// CUser::ValidateStrikerInfo @ 0x8690be6

/* CUser::ValidateStrikerInfo() */

void __thiscall CUser::ValidateStrikerInfo(CUser *this)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint local_24;
  
  local_24 = 0;
  while( true ) {
    iVar5 = std::vector<_Charac_info,std::allocator<_Charac_info>>::size
                      ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8));
    if (iVar5 <= (int)local_24) break;
    iVar5 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                      ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                       local_24);
    if (*(int *)(iVar5 + 0x14b8) != 0) {
      iVar5 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         local_24);
      uVar4 = get_charac_idx(this,*(uint *)(iVar5 + 0x14b8));
      if (uVar4 == 0xffffffff) {
        iVar5 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                          ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                           local_24);
        *(undefined4 *)(iVar5 + 0x14b8) = 0;
        iVar5 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                          ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                           local_24);
        *(undefined1 *)(iVar5 + 0x14b7) = 0;
      }
      else {
        iVar5 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                          ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                           local_24);
        bVar1 = *(byte *)(iVar5 + 0x14b7);
        iVar5 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                          ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                           uVar4);
        cVar3 = *(char *)(iVar5 + 0x29);
        iVar5 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                          ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                           uVar4);
        cVar2 = *(char *)(iVar5 + 0x26);
        iVar5 = G_CDataManager();
        cVar3 = StrikerScript::checkSkillIndex
                          (*(StrikerScript **)(iVar5 + 0x6390),(short)cVar2,
                           (short)((char)(cVar3 << 4) >> 4),(uint)bVar1);
        if (cVar3 != '\x01') {
          iVar5 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                            ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                             local_24);
          *(undefined4 *)(iVar5 + 0x14b8) = 0;
          iVar5 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                            ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                             local_24);
          *(undefined1 *)(iVar5 + 0x14b7) = 0;
        }
      }
    }
    local_24 = local_24 + 1;
  }
  return;
}
```
