# Reset_party_overlapped_drop_ratio

`_ZN6CParty33Reset_party_overlapped_drop_ratioEv`

`CParty::Reset_party_overlapped_drop_ratio()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b916e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b916e  _ZN6CParty33Reset_party_overlapped_drop_ratioEv
#           CParty::Reset_party_overlapped_drop_ratio()
# range [0x085b916e, 0x085b949b]
085b916e +0x000:  push   %ebp
085b916f +0x001:  mov    %esp,%ebp
085b9171 +0x003:  sub    $0xf8,%esp
085b9177 +0x009:  mov    0x8(%ebp),%eax
085b917a +0x00c:  movl   $0x0,0x186c(%eax)
085b9184 +0x016:  mov    0x8(%ebp),%eax
085b9187 +0x019:  movl   $0x0,0x1870(%eax)
085b9191 +0x023:  movl   $0x0,-0x2c(%ebp)
085b9198 +0x02a:  movl   $0x0,-0x28(%ebp)
085b919f +0x031:  movl   $0x0,-0x24(%ebp)
085b91a6 +0x038:  movl   $0x0,-0x20(%ebp)
085b91ad +0x03f:  movb   $0x0,-0x1a(%ebp)
085b91b1 +0x043:  movb   $0x0,-0x19(%ebp)
085b91b5 +0x047:  movl   $0x0,-0x18(%ebp)
085b91bc +0x04e:  jmp    085b9380 <+0x212>
085b91c1 +0x053:  mov    -0x18(%ebp),%eax
085b91c4 +0x056:  mov    %eax,0x4(%esp)
085b91c8 +0x05a:  mov    0x8(%ebp),%eax
085b91cb +0x05d:  mov    %eax,(%esp)
085b91ce +0x060:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085b91d3 +0x065:  xor    $0x1,%eax
085b91d6 +0x068:  test   %al,%al
085b91d8 +0x06a:  jne    085b937b <+0x20d>
085b91de +0x070:  mov    -0x18(%ebp),%eax
085b91e1 +0x073:  mov    0x8(%ebp),%edx
085b91e4 +0x076:  movzbl 0x380(%edx,%eax,1),%eax
085b91ec +0x07e:  test   %al,%al
085b91ee +0x080:  je     085b937c <+0x20e>
085b91f4 +0x086:  movb   $0x0,-0x1a(%ebp)
085b91f8 +0x08a:  mov    -0x18(%ebp),%edx
085b91fb +0x08d:  mov    0x8(%ebp),%ecx
085b91fe +0x090:  mov    %edx,%eax
085b9200 +0x092:  add    %eax,%eax
085b9202 +0x094:  add    %edx,%eax
085b9204 +0x096:  shl    $0x3,%eax
085b9207 +0x099:  lea    (%ecx,%eax,1),%eax
085b920a +0x09c:  add    $0x78,%eax
085b920d +0x09f:  mov    (%eax),%eax
085b920f +0x0a1:  mov    %eax,(%esp)
085b9212 +0x0a4:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085b9217 +0x0a9:  lea    -0xe3(%ebp),%edx
085b921d +0x0af:  movl   $0x13,0xc(%esp)
085b9225 +0x0b7:  movl   $0x0,0x8(%esp)
085b922d +0x0bf:  mov    %eax,0x4(%esp)
085b9231 +0x0c3:  mov    %edx,(%esp)
085b9234 +0x0c6:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
085b9239 +0x0cb:  sub    $0x4,%esp
085b923c +0x0ce:  mov    -0xe1(%ebp),%eax
085b9242 +0x0d4:  mov    %eax,-0x14(%ebp)
085b9245 +0x0d7:  mov    -0x18(%ebp),%edx
085b9248 +0x0da:  mov    0x8(%ebp),%ecx
085b924b +0x0dd:  mov    %edx,%eax
085b924d +0x0df:  add    %eax,%eax
085b924f +0x0e1:  add    %edx,%eax
085b9251 +0x0e3:  shl    $0x3,%eax
085b9254 +0x0e6:  lea    (%ecx,%eax,1),%eax
085b9257 +0x0e9:  add    $0x78,%eax
085b925a +0x0ec:  mov    (%eax),%eax
085b925c +0x0ee:  mov    %eax,(%esp)
085b925f +0x0f1:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085b9264 +0x0f6:  lea    -0xa6(%ebp),%edx
085b926a +0x0fc:  movl   $0x12,0xc(%esp)
085b9272 +0x104:  movl   $0x0,0x8(%esp)
085b927a +0x10c:  mov    %eax,0x4(%esp)
085b927e +0x110:  mov    %edx,(%esp)
085b9281 +0x113:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
085b9286 +0x118:  sub    $0x4,%esp
085b9289 +0x11b:  mov    -0xa4(%ebp),%eax
085b928f +0x121:  mov    %eax,-0x10(%ebp)
085b9292 +0x124:  mov    -0x18(%ebp),%edx
085b9295 +0x127:  mov    0x8(%ebp),%ecx
085b9298 +0x12a:  mov    %edx,%eax
085b929a +0x12c:  add    %eax,%eax
085b929c +0x12e:  add    %edx,%eax
085b929e +0x130:  shl    $0x3,%eax
085b92a1 +0x133:  lea    (%ecx,%eax,1),%eax
085b92a4 +0x136:  add    $0x78,%eax
085b92a7 +0x139:  mov    (%eax),%eax
085b92a9 +0x13b:  mov    %eax,(%esp)
085b92ac +0x13e:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085b92b1 +0x143:  lea    -0x69(%ebp),%edx
085b92b4 +0x146:  movl   $0x11,0xc(%esp)
085b92bc +0x14e:  movl   $0x0,0x8(%esp)
085b92c4 +0x156:  mov    %eax,0x4(%esp)
085b92c8 +0x15a:  mov    %edx,(%esp)
085b92cb +0x15d:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
085b92d0 +0x162:  sub    $0x4,%esp
085b92d3 +0x165:  mov    -0x67(%ebp),%eax
085b92d6 +0x168:  mov    %eax,-0xc(%ebp)
085b92d9 +0x16b:  cmpl   $0x5e7f,-0x14(%ebp)
085b92e0 +0x172:  jbe    085b92f5 <+0x187>
085b92e2 +0x174:  cmpl   $0x5e87,-0x14(%ebp)
085b92e9 +0x17b:  ja     085b92f5 <+0x187>
085b92eb +0x17d:  addl   $0x1,-0x28(%ebp)
085b92ef +0x181:  addb   $0x1,-0x1a(%ebp)
085b92f3 +0x185:  jmp    085b9315 <+0x1a7>
085b92f5 +0x187:  cmpl   $0x5e7f,-0x14(%ebp)
085b92fc +0x18e:  jne    085b9304 <+0x196>
085b92fe +0x190:  addl   $0x1,-0x2c(%ebp)
085b9302 +0x194:  jmp    085b9315 <+0x1a7>
085b9304 +0x196:  cmpl   $0x5ed9,-0x14(%ebp)
085b930b +0x19d:  jne    085b9315 <+0x1a7>
085b930d +0x19f:  addl   $0x1,-0x28(%ebp)
085b9311 +0x1a3:  addb   $0x1,-0x1a(%ebp)
085b9315 +0x1a7:  cmpl   $0x5692,-0x10(%ebp)
085b931c +0x1ae:  jbe    085b9331 <+0x1c3>
085b931e +0x1b0:  cmpl   $0x569a,-0x10(%ebp)
085b9325 +0x1b7:  ja     085b9331 <+0x1c3>
085b9327 +0x1b9:  addl   $0x1,-0x24(%ebp)
085b932b +0x1bd:  addb   $0x1,-0x1a(%ebp)
085b932f +0x1c1:  jmp    085b9342 <+0x1d4>
085b9331 +0x1c3:  cmpl   $0x5ed9,-0x14(%ebp)
085b9338 +0x1ca:  jne    085b9342 <+0x1d4>
085b933a +0x1cc:  addl   $0x1,-0x24(%ebp)
085b933e +0x1d0:  addb   $0x1,-0x1a(%ebp)
085b9342 +0x1d4:  cmpl   $0x4eca,-0xc(%ebp)
085b9349 +0x1db:  jbe    085b935e <+0x1f0>
085b934b +0x1dd:  cmpl   $0x4ed2,-0xc(%ebp)
085b9352 +0x1e4:  ja     085b935e <+0x1f0>
085b9354 +0x1e6:  addl   $0x1,-0x20(%ebp)
085b9358 +0x1ea:  addb   $0x1,-0x1a(%ebp)
085b935c +0x1ee:  jmp    085b936f <+0x201>
085b935e +0x1f0:  cmpl   $0x5ed9,-0x14(%ebp)
085b9365 +0x1f7:  jne    085b936f <+0x201>
085b9367 +0x1f9:  addl   $0x1,-0x20(%ebp)
085b936b +0x1fd:  addb   $0x1,-0x1a(%ebp)
085b936f +0x201:  cmpb   $0x3,-0x1a(%ebp)
085b9373 +0x205:  jne    085b937c <+0x20e>
085b9375 +0x207:  movb   $0x1,-0x19(%ebp)
085b9379 +0x20b:  jmp    085b937c <+0x20e>
085b937b +0x20d:  nop
085b937c +0x20e:  addl   $0x1,-0x18(%ebp)
085b9380 +0x212:  cmpl   $0x3,-0x18(%ebp)
085b9384 +0x216:  setle  %al
085b9387 +0x219:  test   %al,%al
085b9389 +0x21b:  jne    085b91c1 <+0x53>
085b938f +0x221:  cmpl   $0x0,-0x2c(%ebp)
085b9393 +0x225:  je     085b93b0 <+0x242>
085b9395 +0x227:  mov    0x8(%ebp),%eax
085b9398 +0x22a:  mov    0x186c(%eax),%eax
085b939e +0x230:  mov    -0x2c(%ebp),%edx
085b93a1 +0x233:  add    $0x2,%edx
085b93a4 +0x236:  lea    (%eax,%edx,1),%edx
085b93a7 +0x239:  mov    0x8(%ebp),%eax
085b93aa +0x23c:  mov    %edx,0x186c(%eax)
085b93b0 +0x242:  cmpl   $0x0,-0x28(%ebp)
085b93b4 +0x246:  je     085b93ee <+0x280>
085b93b6 +0x248:  mov    0x8(%ebp),%eax
085b93b9 +0x24b:  mov    0x186c(%eax),%eax
085b93bf +0x251:  mov    -0x28(%ebp),%edx
085b93c2 +0x254:  add    $0x2,%edx
085b93c5 +0x257:  add    %edx,%edx
085b93c7 +0x259:  lea    (%eax,%edx,1),%edx
085b93ca +0x25c:  mov    0x8(%ebp),%eax
085b93cd +0x25f:  mov    %edx,0x186c(%eax)
085b93d3 +0x265:  mov    0x8(%ebp),%eax
085b93d6 +0x268:  mov    0x1870(%eax),%eax
085b93dc +0x26e:  mov    -0x28(%ebp),%edx
085b93df +0x271:  add    $0x2,%edx
085b93e2 +0x274:  lea    (%eax,%edx,1),%edx
085b93e5 +0x277:  mov    0x8(%ebp),%eax
085b93e8 +0x27a:  mov    %edx,0x1870(%eax)
085b93ee +0x280:  cmpl   $0x0,-0x24(%ebp)
085b93f2 +0x284:  je     085b942c <+0x2be>
085b93f4 +0x286:  mov    0x8(%ebp),%eax
085b93f7 +0x289:  mov    0x186c(%eax),%eax
085b93fd +0x28f:  mov    -0x24(%ebp),%edx
085b9400 +0x292:  add    $0x2,%edx
085b9403 +0x295:  add    %edx,%edx
085b9405 +0x297:  lea    (%eax,%edx,1),%edx
085b9408 +0x29a:  mov    0x8(%ebp),%eax
085b940b +0x29d:  mov    %edx,0x186c(%eax)
085b9411 +0x2a3:  mov    0x8(%ebp),%eax
085b9414 +0x2a6:  mov    0x1870(%eax),%eax
085b941a +0x2ac:  mov    -0x24(%ebp),%edx
085b941d +0x2af:  add    $0x2,%edx
085b9420 +0x2b2:  lea    (%eax,%edx,1),%edx
085b9423 +0x2b5:  mov    0x8(%ebp),%eax
085b9426 +0x2b8:  mov    %edx,0x1870(%eax)
085b942c +0x2be:  cmpl   $0x0,-0x20(%ebp)
085b9430 +0x2c2:  je     085b946a <+0x2fc>
085b9432 +0x2c4:  mov    0x8(%ebp),%eax
085b9435 +0x2c7:  mov    0x186c(%eax),%eax
085b943b +0x2cd:  mov    -0x20(%ebp),%edx
085b943e +0x2d0:  add    $0x2,%edx
085b9441 +0x2d3:  add    %edx,%edx
085b9443 +0x2d5:  lea    (%eax,%edx,1),%edx
085b9446 +0x2d8:  mov    0x8(%ebp),%eax
085b9449 +0x2db:  mov    %edx,0x186c(%eax)
085b944f +0x2e1:  mov    0x8(%ebp),%eax
085b9452 +0x2e4:  mov    0x1870(%eax),%eax
085b9458 +0x2ea:  mov    -0x20(%ebp),%edx
085b945b +0x2ed:  add    $0x2,%edx
085b945e +0x2f0:  lea    (%eax,%edx,1),%edx
085b9461 +0x2f3:  mov    0x8(%ebp),%eax
085b9464 +0x2f6:  mov    %edx,0x1870(%eax)
085b946a +0x2fc:  cmpb   $0x0,-0x19(%ebp)
085b946e +0x300:  je     085b949a <+0x32c>
085b9470 +0x302:  mov    0x8(%ebp),%eax
085b9473 +0x305:  mov    0x186c(%eax),%eax
085b9479 +0x30b:  lea    0x5(%eax),%edx
085b947c +0x30e:  mov    0x8(%ebp),%eax
085b947f +0x311:  mov    %edx,0x186c(%eax)
085b9485 +0x317:  mov    0x8(%ebp),%eax
085b9488 +0x31a:  mov    0x1870(%eax),%eax
085b948e +0x320:  lea    0x2(%eax),%edx
085b9491 +0x323:  mov    0x8(%ebp),%eax
085b9494 +0x326:  mov    %edx,0x1870(%eax)
085b949a +0x32c:  leave
085b949b +0x32d:  ret
```

## 反编译 C

```c
// CParty::Reset_party_overlapped_drop_ratio @ 0x85b916e

/* CParty::Reset_party_overlapped_drop_ratio() */

void __thiscall CParty::Reset_party_overlapped_drop_ratio(CParty *this)

{
  char cVar1;
  int iVar2;
  undefined1 local_e7 [2];
  uint local_e5;
  undefined1 local_aa [2];
  uint local_a8;
  undefined1 local_6d [2];
  uint local_6b;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  char local_1e;
  char local_1d;
  int local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  
  *(undefined4 *)(this + 0x186c) = 0;
  *(undefined4 *)(this + 0x1870) = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_1e = '\0';
  local_1d = '\0';
  for (local_1c = 0; local_1c < 4; local_1c = local_1c + 1) {
    cVar1 = _checkValidUser(this,local_1c);
    if ((cVar1 == '\x01') && (this[local_1c + 0x380] != (CParty)0x0)) {
      local_1e = '\0';
      iVar2 = CUserCharacInfo::getCurCharacInvenR
                        (*(CUserCharacInfo **)(this + local_1c * 0x18 + 0x78));
      CInventory::GetInvenSlot((int)local_e7,iVar2);
      local_18 = local_e5;
      iVar2 = CUserCharacInfo::getCurCharacInvenR
                        (*(CUserCharacInfo **)(this + local_1c * 0x18 + 0x78));
      CInventory::GetInvenSlot((int)local_aa,iVar2);
      local_14 = local_a8;
      iVar2 = CUserCharacInfo::getCurCharacInvenR
                        (*(CUserCharacInfo **)(this + local_1c * 0x18 + 0x78));
      CInventory::GetInvenSlot((int)local_6d,iVar2);
      local_10 = local_6b;
      if ((local_18 < 0x5e80) || (0x5e87 < local_18)) {
        if (local_18 == 0x5e7f) {
          local_30 = local_30 + 1;
        }
        else if (local_18 == 0x5ed9) {
          local_2c = local_2c + 1;
          local_1e = local_1e + '\x01';
        }
      }
      else {
        local_2c = local_2c + 1;
        local_1e = local_1e + '\x01';
      }
      if ((local_14 < 0x5693) || (0x569a < local_14)) {
        if (local_18 == 0x5ed9) {
          local_28 = local_28 + 1;
          local_1e = local_1e + '\x01';
        }
      }
      else {
        local_28 = local_28 + 1;
        local_1e = local_1e + '\x01';
      }
      if ((local_6b < 0x4ecb) || (0x4ed2 < local_6b)) {
        if (local_18 == 0x5ed9) {
          local_24 = local_24 + 1;
          local_1e = local_1e + '\x01';
        }
      }
      else {
        local_24 = local_24 + 1;
        local_1e = local_1e + '\x01';
      }
      if (local_1e == '\x03') {
        local_1d = '\x01';
      }
    }
  }
  if (local_30 != 0) {
    *(int *)(this + 0x186c) = *(int *)(this + 0x186c) + local_30 + 2;
  }
  if (local_2c != 0) {
    *(int *)(this + 0x186c) = *(int *)(this + 0x186c) + (local_2c + 2) * 2;
    *(int *)(this + 0x1870) = *(int *)(this + 0x1870) + local_2c + 2;
  }
  if (local_28 != 0) {
    *(int *)(this + 0x186c) = *(int *)(this + 0x186c) + (local_28 + 2) * 2;
    *(int *)(this + 0x1870) = *(int *)(this + 0x1870) + local_28 + 2;
  }
  if (local_24 != 0) {
    *(int *)(this + 0x186c) = *(int *)(this + 0x186c) + (local_24 + 2) * 2;
    *(int *)(this + 0x1870) = *(int *)(this + 0x1870) + local_24 + 2;
  }
  if (local_1d != '\0') {
    *(int *)(this + 0x186c) = *(int *)(this + 0x186c) + 5;
    *(int *)(this + 0x1870) = *(int *)(this + 0x1870) + 2;
  }
  return;
}
```
