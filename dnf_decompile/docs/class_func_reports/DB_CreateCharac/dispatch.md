# dispatch

`_ZN15DB_CreateCharac8dispatchEiiP6Stream`

`DB_CreateCharac::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_CreateCharac` | `0x08400d2c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08400d2c  _ZN15DB_CreateCharac8dispatchEiiP6Stream
#           DB_CreateCharac::dispatch(int, int, Stream*)
# range [0x08400d2c, 0x0840103d]
08400d2c +0x000:  push   %ebp
08400d2d +0x001:  mov    %esp,%ebp
08400d2f +0x003:  sub    $0x28,%esp
08400d32 +0x006:  mov    0x8(%ebp),%eax
08400d35 +0x009:  mov    0x14(%ebp),%edx
08400d38 +0x00c:  mov    %edx,0xc(%esp)
08400d3c +0x010:  mov    0x10(%ebp),%edx
08400d3f +0x013:  mov    %edx,0x8(%esp)
08400d43 +0x017:  mov    0xc(%ebp),%edx
08400d46 +0x01a:  mov    %edx,0x4(%esp)
08400d4a +0x01e:  mov    %eax,(%esp)
08400d4d +0x021:  call   083fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>  ; DBDispatcher::dispatch(int, int, Stream*)
08400d52 +0x026:  xor    $0x1,%eax
08400d55 +0x029:  test   %al,%al
08400d57 +0x02b:  je     08400d63 <+0x37>
08400d59 +0x02d:  mov    $0x0,%eax
08400d5e +0x032:  jmp    0840103b <+0x30f>
08400d63 +0x037:  mov    0x14(%ebp),%eax
08400d66 +0x03a:  mov    %eax,(%esp)
08400d69 +0x03d:  call   08184854 <_GLOBAL__I__ZN4ARAD25Arad_DB_Charac_Dispatcher8dispatchEiiP6Stream+0x1c>  ; global constructors keyed to ARAD::Arad_DB_Charac_Dispatcher::dispatch(int, int, Stream*)+0x1c
08400d6e +0x042:  mov    %eax,-0xc(%ebp)
08400d71 +0x045:  cmpl   $0x0,-0xc(%ebp)
08400d75 +0x049:  jne    08400d81 <+0x55>
08400d77 +0x04b:  mov    $0x0,%eax
08400d7c +0x050:  jmp    0840103b <+0x30f>
08400d81 +0x055:  mov    -0xc(%ebp),%eax
08400d84 +0x058:  movl   $0x0,0x5344(%eax)
08400d8e +0x062:  movl   $0x1,0x8(%esp)
08400d96 +0x06a:  mov    -0xc(%ebp),%eax
08400d99 +0x06d:  mov    %eax,0x4(%esp)
08400d9d +0x071:  mov    0x8(%ebp),%eax
08400da0 +0x074:  mov    %eax,(%esp)
08400da3 +0x077:  call   08401922 <_ZN15DB_CreateCharac25CheckLimitCreateNewCharacEP17SIG_CREATE_CHARACb>  ; DB_CreateCharac::CheckLimitCreateNewCharac(SIG_CREATE_CHARAC*, bool)
08400da8 +0x07c:  mov    %al,-0xd(%ebp)
08400dab +0x07f:  movzbl -0xd(%ebp),%eax
08400daf +0x083:  xor    $0x1,%eax
08400db2 +0x086:  test   %al,%al
08400db4 +0x088:  jne    08400ffa <+0x2ce>
08400dba +0x08e:  mov    -0xc(%ebp),%eax
08400dbd +0x091:  mov    %eax,0x4(%esp)
08400dc1 +0x095:  mov    0x8(%ebp),%eax
08400dc4 +0x098:  mov    %eax,(%esp)
08400dc7 +0x09b:  call   08401dcc <_ZN15DB_CreateCharac15CreateNewCharacEP17SIG_CREATE_CHARAC>  ; DB_CreateCharac::CreateNewCharac(SIG_CREATE_CHARAC*)
08400dcc +0x0a0:  mov    %al,-0xd(%ebp)
08400dcf +0x0a3:  movzbl -0xd(%ebp),%eax
08400dd3 +0x0a7:  xor    $0x1,%eax
08400dd6 +0x0aa:  test   %al,%al
08400dd8 +0x0ac:  jne    08400ffd <+0x2d1>
08400dde +0x0b2:  mov    -0xc(%ebp),%eax
08400de1 +0x0b5:  mov    %eax,0x4(%esp)
08400de5 +0x0b9:  mov    0x8(%ebp),%eax
08400de8 +0x0bc:  mov    %eax,(%esp)
08400deb +0x0bf:  call   0840275c <_ZN15DB_CreateCharac11GetCharacNoEP17SIG_CREATE_CHARAC>  ; DB_CreateCharac::GetCharacNo(SIG_CREATE_CHARAC*)
08400df0 +0x0c4:  mov    %al,-0xd(%ebp)
08400df3 +0x0c7:  movzbl -0xd(%ebp),%eax
08400df7 +0x0cb:  xor    $0x1,%eax
08400dfa +0x0ce:  test   %al,%al
08400dfc +0x0d0:  je     08400e10 <+0xe4>
08400dfe +0x0d2:  mov    -0xc(%ebp),%eax
08400e01 +0x0d5:  movl   $0x2,0x5344(%eax)
08400e0b +0x0df:  jmp    08401001 <+0x2d5>
08400e10 +0x0e4:  mov    -0xc(%ebp),%eax
08400e13 +0x0e7:  mov    %eax,0x4(%esp)
08400e17 +0x0eb:  mov    0x8(%ebp),%eax
08400e1a +0x0ee:  mov    %eax,(%esp)
08400e1d +0x0f1:  call   0840215e <_ZN15DB_CreateCharac20_CreateNewCharacStatEP17SIG_CREATE_CHARAC>  ; DB_CreateCharac::_CreateNewCharacStat(SIG_CREATE_CHARAC*)
08400e22 +0x0f6:  mov    %al,-0xd(%ebp)
08400e25 +0x0f9:  movzbl -0xd(%ebp),%eax
08400e29 +0x0fd:  xor    $0x1,%eax
08400e2c +0x100:  test   %al,%al
08400e2e +0x102:  jne    08401000 <+0x2d4>
08400e34 +0x108:  mov    -0xc(%ebp),%eax
08400e37 +0x10b:  movzbl 0x533f(%eax),%eax
08400e3e +0x112:  test   %al,%al
08400e40 +0x114:  je     08400e6c <+0x140>
08400e42 +0x116:  mov    -0xc(%ebp),%eax
08400e45 +0x119:  lea    0x3a9(%eax),%edx
08400e4b +0x11f:  mov    -0xc(%ebp),%eax
08400e4e +0x122:  mov    0x5348(%eax),%eax
08400e54 +0x128:  mov    %edx,0x8(%esp)
08400e58 +0x12c:  mov    %eax,0x4(%esp)
08400e5c +0x130:  mov    0x8(%ebp),%eax
08400e5f +0x133:  mov    %eax,(%esp)
08400e62 +0x136:  call   08402230 <_ZN15DB_CreateCharac15CreateInventoryEjP10Inven_Item>  ; DB_CreateCharac::CreateInventory(unsigned int, Inven_Item*)
08400e67 +0x13b:  mov    %al,-0xd(%ebp)
08400e6a +0x13e:  jmp    08400e8f <+0x163>
08400e6c +0x140:  mov    -0xc(%ebp),%eax
08400e6f +0x143:  mov    0x5348(%eax),%eax
08400e75 +0x149:  movl   $0x0,0x8(%esp)
08400e7d +0x151:  mov    %eax,0x4(%esp)
08400e81 +0x155:  mov    0x8(%ebp),%eax
08400e84 +0x158:  mov    %eax,(%esp)
08400e87 +0x15b:  call   08402230 <_ZN15DB_CreateCharac15CreateInventoryEjP10Inven_Item>  ; DB_CreateCharac::CreateInventory(unsigned int, Inven_Item*)
08400e8c +0x160:  mov    %al,-0xd(%ebp)
08400e8f +0x163:  mov    -0xc(%ebp),%eax
08400e92 +0x166:  movzbl 0x5340(%eax),%eax
08400e99 +0x16d:  test   %al,%al
08400e9b +0x16f:  je     08400ec5 <+0x199>
08400e9d +0x171:  mov    -0xc(%ebp),%eax
08400ea0 +0x174:  lea    0x4e01(%eax),%edx
08400ea6 +0x17a:  mov    -0xc(%ebp),%eax
08400ea9 +0x17d:  mov    0x5348(%eax),%eax
08400eaf +0x183:  mov    %edx,0x8(%esp)
08400eb3 +0x187:  mov    %eax,0x4(%esp)
08400eb7 +0x18b:  mov    0x8(%ebp),%eax
08400eba +0x18e:  mov    %eax,(%esp)
08400ebd +0x191:  call   084023ac <_ZN15DB_CreateCharac11CreateEquipEjP10Inven_Item>  ; DB_CreateCharac::CreateEquip(unsigned int, Inven_Item*)
08400ec2 +0x196:  mov    %al,-0xd(%ebp)
08400ec5 +0x199:  movzbl -0xd(%ebp),%eax
08400ec9 +0x19d:  xor    $0x1,%eax
08400ecc +0x1a0:  test   %al,%al
08400ece +0x1a2:  je     08400edd <+0x1b1>
08400ed0 +0x1a4:  mov    -0xc(%ebp),%eax
08400ed3 +0x1a7:  movl   $0x2,0x5344(%eax)
08400edd +0x1b1:  mov    -0xc(%ebp),%eax
08400ee0 +0x1b4:  mov    %eax,0x4(%esp)
08400ee4 +0x1b8:  mov    0x8(%ebp),%eax
08400ee7 +0x1bb:  mov    %eax,(%esp)
08400eea +0x1be:  call   084024e6 <_ZN15DB_CreateCharac11CreateSkillEP17SIG_CREATE_CHARAC>  ; DB_CreateCharac::CreateSkill(SIG_CREATE_CHARAC*)
08400eef +0x1c3:  mov    %al,-0xd(%ebp)
08400ef2 +0x1c6:  movzbl -0xd(%ebp),%eax
08400ef6 +0x1ca:  xor    $0x1,%eax
08400ef9 +0x1cd:  test   %al,%al
08400efb +0x1cf:  je     08400f0a <+0x1de>
08400efd +0x1d1:  mov    -0xc(%ebp),%eax
08400f00 +0x1d4:  movl   $0x2,0x5344(%eax)
08400f0a +0x1de:  mov    -0xc(%ebp),%eax
08400f0d +0x1e1:  mov    0x5348(%eax),%eax
08400f13 +0x1e7:  mov    %eax,0x4(%esp)
08400f17 +0x1eb:  mov    0x8(%ebp),%eax
08400f1a +0x1ee:  mov    %eax,(%esp)
08400f1d +0x1f1:  call   084026ec <_ZN15DB_CreateCharac9CreatePvPEj>  ; DB_CreateCharac::CreatePvP(unsigned int)
08400f22 +0x1f6:  mov    %al,-0xd(%ebp)
08400f25 +0x1f9:  movzbl -0xd(%ebp),%eax
08400f29 +0x1fd:  xor    $0x1,%eax
08400f2c +0x200:  test   %al,%al
08400f2e +0x202:  je     08400f3d <+0x211>
08400f30 +0x204:  mov    -0xc(%ebp),%eax
08400f33 +0x207:  movl   $0x2,0x5344(%eax)
08400f3d +0x211:  mov    -0xc(%ebp),%eax
08400f40 +0x214:  mov    (%eax),%eax
08400f42 +0x216:  mov    %eax,0x4(%esp)
08400f46 +0x21a:  mov    0x8(%ebp),%eax
08400f49 +0x21d:  mov    %eax,(%esp)
08400f4c +0x220:  call   084010fc <_ZN15DB_CreateCharac20_createCharacDungeonEj>  ; DB_CreateCharac::_createCharacDungeon(unsigned int)
08400f51 +0x225:  mov    %al,-0xd(%ebp)
08400f54 +0x228:  movzbl -0xd(%ebp),%eax
08400f58 +0x22c:  xor    $0x1,%eax
08400f5b +0x22f:  test   %al,%al
08400f5d +0x231:  je     08400f71 <+0x245>
08400f5f +0x233:  mov    -0xc(%ebp),%eax
08400f62 +0x236:  movl   $0x2,0x5344(%eax)
08400f6c +0x240:  jmp    08401001 <+0x2d5>
08400f71 +0x245:  mov    -0xc(%ebp),%eax
08400f74 +0x248:  mov    0x5348(%eax),%eax
08400f7a +0x24e:  mov    %eax,0x4(%esp)
08400f7e +0x252:  mov    0x8(%ebp),%eax
08400f81 +0x255:  mov    %eax,(%esp)
08400f84 +0x258:  call   08401094 <_ZN15DB_CreateCharac18_createCharacQuestEj>  ; DB_CreateCharac::_createCharacQuest(unsigned int)
08400f89 +0x25d:  mov    %al,-0xd(%ebp)
08400f8c +0x260:  movzbl -0xd(%ebp),%eax
08400f90 +0x264:  xor    $0x1,%eax
08400f93 +0x267:  test   %al,%al
08400f95 +0x269:  je     08400fa6 <+0x27a>
08400f97 +0x26b:  mov    -0xc(%ebp),%eax
08400f9a +0x26e:  movl   $0x2,0x5344(%eax)
08400fa4 +0x278:  jmp    08401001 <+0x2d5>
08400fa6 +0x27a:  mov    -0xc(%ebp),%eax
08400fa9 +0x27d:  mov    0x5348(%eax),%eax
08400faf +0x283:  mov    %eax,0x4(%esp)
08400fb3 +0x287:  mov    0x8(%ebp),%eax
08400fb6 +0x28a:  mov    %eax,(%esp)
08400fb9 +0x28d:  call   0840103e <_ZN15DB_CreateCharac28_createCharacNPCRelationshipEj>  ; DB_CreateCharac::_createCharacNPCRelationship(unsigned int)
08400fbe +0x292:  mov    %al,-0xd(%ebp)
08400fc1 +0x295:  movzbl -0xd(%ebp),%eax
08400fc5 +0x299:  xor    $0x1,%eax
08400fc8 +0x29c:  test   %al,%al
08400fca +0x29e:  je     08400fdb <+0x2af>
08400fcc +0x2a0:  mov    -0xc(%ebp),%eax
08400fcf +0x2a3:  movl   $0x2,0x5344(%eax)
08400fd9 +0x2ad:  jmp    08401001 <+0x2d5>
08400fdb +0x2af:  movl   $0x1,0x8(%esp)
08400fe3 +0x2b7:  mov    -0xc(%ebp),%eax
08400fe6 +0x2ba:  mov    %eax,0x4(%esp)
08400fea +0x2be:  mov    0x8(%ebp),%eax
08400fed +0x2c1:  mov    %eax,(%esp)
08400ff0 +0x2c4:  call   08401b9a <_ZN15DB_CreateCharac26InsertLimitCreateNewCharacEP17SIG_CREATE_CHARACb>  ; DB_CreateCharac::InsertLimitCreateNewCharac(SIG_CREATE_CHARAC*, bool)
08400ff5 +0x2c9:  mov    %al,-0xd(%ebp)
08400ff8 +0x2cc:  jmp    08401001 <+0x2d5>
08400ffa +0x2ce:  nop
08400ffb +0x2cf:  jmp    08401001 <+0x2d5>
08400ffd +0x2d1:  nop
08400ffe +0x2d2:  jmp    08401001 <+0x2d5>
08401000 +0x2d4:  nop
08401001 +0x2d5:  mov    -0xc(%ebp),%eax
08401004 +0x2d8:  mov    %eax,0xc(%esp)
08401008 +0x2dc:  mov    0x10(%ebp),%eax
0840100b +0x2df:  mov    %eax,0x8(%esp)
0840100f +0x2e3:  mov    0xc(%ebp),%eax
08401012 +0x2e6:  mov    %eax,0x4(%esp)
08401016 +0x2ea:  mov    0x8(%ebp),%eax
08401019 +0x2ed:  mov    %eax,(%esp)
0840101c +0x2f0:  call   084027b0 <_ZN15DB_CreateCharac10SendResultEiiP17SIG_CREATE_CHARAC>  ; DB_CreateCharac::SendResult(int, int, SIG_CREATE_CHARAC*)
08401021 +0x2f5:  mov    %al,-0xd(%ebp)
08401024 +0x2f8:  movzbl -0xd(%ebp),%eax
08401028 +0x2fc:  xor    $0x1,%eax
0840102b +0x2ff:  test   %al,%al
0840102d +0x301:  je     08401036 <+0x30a>
0840102f +0x303:  mov    $0x0,%eax
08401034 +0x308:  jmp    0840103b <+0x30f>
08401036 +0x30a:  mov    $0x1,%eax
0840103b +0x30f:  leave
0840103c +0x310:  ret
0840103d +0x311:  nop
```

## 反编译 C

```c
// DB_CreateCharac::dispatch @ 0x8400d2c

/* DB_CreateCharac::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_CreateCharac::dispatch(DB_CreateCharac *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  SIG_CREATE_CHARAC *pSVar3;
  char local_11;
  
  cVar1 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar1 == '\x01') {
    pSVar3 = Stream::GetOutBuffer<SIG_CREATE_CHARAC>(param_3);
    if (pSVar3 == (SIG_CREATE_CHARAC *)0x0) {
      uVar2 = 0;
    }
    else {
      *(undefined4 *)(pSVar3 + 0x5344) = 0;
      cVar1 = CheckLimitCreateNewCharac((SIG_CREATE_CHARAC *)this,SUB41(pSVar3,0));
      if ((cVar1 == '\x01') && (cVar1 = CreateNewCharac(this,pSVar3), cVar1 == '\x01')) {
        cVar1 = GetCharacNo(this,pSVar3);
        if (cVar1 == '\x01') {
          cVar1 = _CreateNewCharacStat(this,pSVar3);
          if (cVar1 == '\x01') {
            if (pSVar3[0x533f] == (SIG_CREATE_CHARAC)0x0) {
              local_11 = CreateInventory(this,*(uint *)(pSVar3 + 0x5348),(Inven_Item *)0x0);
            }
            else {
              local_11 = CreateInventory(this,*(uint *)(pSVar3 + 0x5348),
                                         (Inven_Item *)(pSVar3 + 0x3a9));
            }
            if (pSVar3[0x5340] != (SIG_CREATE_CHARAC)0x0) {
              local_11 = CreateEquip(this,*(uint *)(pSVar3 + 0x5348),(Inven_Item *)(pSVar3 + 0x4e01)
                                    );
            }
            if (local_11 != '\x01') {
              *(undefined4 *)(pSVar3 + 0x5344) = 2;
            }
            cVar1 = CreateSkill(this,pSVar3);
            if (cVar1 != '\x01') {
              *(undefined4 *)(pSVar3 + 0x5344) = 2;
            }
            cVar1 = CreatePvP(this,*(uint *)(pSVar3 + 0x5348));
            if (cVar1 != '\x01') {
              *(undefined4 *)(pSVar3 + 0x5344) = 2;
            }
            cVar1 = _createCharacDungeon(this,*(uint *)pSVar3);
            if (cVar1 == '\x01') {
              cVar1 = _createCharacQuest(this,*(uint *)(pSVar3 + 0x5348));
              if (cVar1 == '\x01') {
                cVar1 = _createCharacNPCRelationship(this,*(uint *)(pSVar3 + 0x5348));
                if (cVar1 == '\x01') {
                  InsertLimitCreateNewCharac((SIG_CREATE_CHARAC *)this,SUB41(pSVar3,0));
                }
                else {
                  *(undefined4 *)(pSVar3 + 0x5344) = 2;
                }
              }
              else {
                *(undefined4 *)(pSVar3 + 0x5344) = 2;
              }
            }
            else {
              *(undefined4 *)(pSVar3 + 0x5344) = 2;
            }
          }
        }
        else {
          *(undefined4 *)(pSVar3 + 0x5344) = 2;
        }
      }
      cVar1 = SendResult(this,param_1,param_2,pSVar3);
      if (cVar1 == '\x01') {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
