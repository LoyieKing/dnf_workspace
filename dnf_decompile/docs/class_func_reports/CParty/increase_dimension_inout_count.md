# increase_dimension_inout_count

`_ZN6CParty30increase_dimension_inout_countEi`

`CParty::increase_dimension_inout_count(int)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859bfe2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859bfe2  _ZN6CParty30increase_dimension_inout_countEi
#           CParty::increase_dimension_inout_count(int)
# range [0x0859bfe2, 0x0859c113]
0859bfe2 +0x000:  push   %ebp
0859bfe3 +0x001:  mov    %esp,%ebp
0859bfe5 +0x003:  push   %esi
0859bfe6 +0x004:  push   %ebx
0859bfe7 +0x005:  sub    $0x20,%esp
0859bfea +0x008:  mov    0x8(%ebp),%eax
0859bfed +0x00b:  mov    0xcac(%eax),%eax
0859bff3 +0x011:  test   %eax,%eax
0859bff5 +0x013:  je     0859c109 <+0x127>
0859bffb +0x019:  mov    0x8(%ebp),%eax
0859bffe +0x01c:  mov    0xcac(%eax),%eax
0859c004 +0x022:  mov    %eax,(%esp)
0859c007 +0x025:  call   0826b938 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x206>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x206
0859c00c +0x02a:  test   %al,%al
0859c00e +0x02c:  sete   %al
0859c011 +0x02f:  test   %al,%al
0859c013 +0x031:  jne    0859c10c <+0x12a>
0859c019 +0x037:  movl   $0x0,-0x18(%ebp)
0859c020 +0x03e:  jmp    0859c0f8 <+0x116>
0859c025 +0x043:  mov    -0x18(%ebp),%eax
0859c028 +0x046:  mov    %eax,0x4(%esp)
0859c02c +0x04a:  mov    0x8(%ebp),%eax
0859c02f +0x04d:  mov    %eax,(%esp)
0859c032 +0x050:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
0859c037 +0x055:  xor    $0x1,%eax
0859c03a +0x058:  test   %al,%al
0859c03c +0x05a:  jne    0859c0f3 <+0x111>
0859c042 +0x060:  movl   $0x0,-0x14(%ebp)
0859c049 +0x067:  jmp    0859c0e2 <+0x100>
0859c04e +0x06c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0859c053 +0x071:  mov    -0x14(%ebp),%edx
0859c056 +0x074:  mov    %edx,0x4(%esp)
0859c05a +0x078:  mov    %eax,(%esp)
0859c05d +0x07b:  call   0822b612 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcbc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcbc
0859c062 +0x080:  movsbl %al,%eax
0859c065 +0x083:  add    0xc(%ebp),%eax
0859c068 +0x086:  mov    %eax,-0x10(%ebp)
0859c06b +0x089:  mov    -0x14(%ebp),%eax
0859c06e +0x08c:  movsbl %al,%ecx
0859c071 +0x08f:  mov    -0x18(%ebp),%edx
0859c074 +0x092:  mov    0x8(%ebp),%ebx
0859c077 +0x095:  mov    %edx,%eax
0859c079 +0x097:  add    %eax,%eax
0859c07b +0x099:  add    %edx,%eax
0859c07d +0x09b:  shl    $0x3,%eax
0859c080 +0x09e:  lea    (%ebx,%eax,1),%eax
0859c083 +0x0a1:  add    $0x78,%eax
0859c086 +0x0a4:  mov    (%eax),%eax
0859c088 +0x0a6:  mov    %ecx,0x4(%esp)
0859c08c +0x0aa:  mov    %eax,(%esp)
0859c08f +0x0ad:  call   085bf9d8 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xf36>  ; global constructors keyed to CParty::cMember::cMember()+0xf36
0859c094 +0x0b2:  movsbl %al,%eax
0859c097 +0x0b5:  add    0xc(%ebp),%eax
0859c09a +0x0b8:  mov    %eax,-0xc(%ebp)
0859c09d +0x0bb:  mov    -0xc(%ebp),%eax
0859c0a0 +0x0be:  cmp    -0x10(%ebp),%eax
0859c0a3 +0x0c1:  jle    0859c0ab <+0xc9>
0859c0a5 +0x0c3:  mov    -0x10(%ebp),%eax
0859c0a8 +0x0c6:  mov    %eax,-0xc(%ebp)
0859c0ab +0x0c9:  mov    -0xc(%ebp),%eax
0859c0ae +0x0cc:  movsbl %al,%ebx
0859c0b1 +0x0cf:  mov    -0x14(%ebp),%eax
0859c0b4 +0x0d2:  movsbl %al,%ecx
0859c0b7 +0x0d5:  mov    -0x18(%ebp),%edx
0859c0ba +0x0d8:  mov    0x8(%ebp),%esi
0859c0bd +0x0db:  mov    %edx,%eax
0859c0bf +0x0dd:  add    %eax,%eax
0859c0c1 +0x0df:  add    %edx,%eax
0859c0c3 +0x0e1:  shl    $0x3,%eax
0859c0c6 +0x0e4:  lea    (%esi,%eax,1),%eax
0859c0c9 +0x0e7:  add    $0x78,%eax
0859c0cc +0x0ea:  mov    (%eax),%eax
0859c0ce +0x0ec:  mov    %ebx,0x8(%esp)
0859c0d2 +0x0f0:  mov    %ecx,0x4(%esp)
0859c0d6 +0x0f4:  mov    %eax,(%esp)
0859c0d9 +0x0f7:  call   0822f184 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x482e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x482e
0859c0de +0x0fc:  addl   $0x1,-0x14(%ebp)
0859c0e2 +0x100:  cmpl   $0x5,-0x14(%ebp)
0859c0e6 +0x104:  setle  %al
0859c0e9 +0x107:  test   %al,%al
0859c0eb +0x109:  jne    0859c04e <+0x6c>
0859c0f1 +0x10f:  jmp    0859c0f4 <+0x112>
0859c0f3 +0x111:  nop
0859c0f4 +0x112:  addl   $0x1,-0x18(%ebp)
0859c0f8 +0x116:  cmpl   $0x3,-0x18(%ebp)
0859c0fc +0x11a:  setle  %al
0859c0ff +0x11d:  test   %al,%al
0859c101 +0x11f:  jne    0859c025 <+0x43>
0859c107 +0x125:  jmp    0859c10d <+0x12b>
0859c109 +0x127:  nop
0859c10a +0x128:  jmp    0859c10d <+0x12b>
0859c10c +0x12a:  nop
0859c10d +0x12b:  add    $0x20,%esp
0859c110 +0x12e:  pop    %ebx
0859c111 +0x12f:  pop    %esi
0859c112 +0x130:  pop    %ebp
0859c113 +0x131:  ret
```

## 反编译 C

```c
// CParty::increase_dimension_inout_count @ 0x859bfe2

/* CParty::increase_dimension_inout_count(int) */

void __thiscall CParty::increase_dimension_inout_count(CParty *this,int param_1)

{
  char cVar1;
  char cVar2;
  CDataManager *this_00;
  int local_1c;
  int local_18;
  int local_10;
  
  if ((*(int *)(this + 0xcac) != 0) &&
     (cVar1 = CDungeon::get_dimension_possible(*(CDungeon **)(this + 0xcac)), cVar1 != '\0')) {
    for (local_1c = 0; local_1c < 4; local_1c = local_1c + 1) {
      cVar1 = checkValidUser(this,local_1c);
      if (cVar1 == '\x01') {
        for (local_18 = 0; local_18 < 6; local_18 = local_18 + 1) {
          this_00 = (CDataManager *)G_CDataManager();
          cVar1 = CDataManager::get_dimensionInout(this_00,local_18);
          cVar2 = CUserCharacInfo::getDemensionInoutValue
                            (*(CUserCharacInfo **)(this + local_1c * 0x18 + 0x78),(char)local_18);
          local_10 = cVar2 + param_1;
          if (cVar1 + param_1 < cVar2 + param_1) {
            local_10 = cVar1 + param_1;
          }
          CUserCharacInfo::setDemensionInoutValue
                    (*(CUserCharacInfo **)(this + local_1c * 0x18 + 0x78),(char)local_18,
                     (char)local_10);
        }
      }
    }
  }
  return;
}
```
