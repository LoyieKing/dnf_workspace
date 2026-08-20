# dispatch

`_ZN24DB_UpdateItemMakingSkill8dispatchEiiP6Stream`

`DB_UpdateItemMakingSkill::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateItemMakingSkill` | `0x08440f3e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08440f3e  _ZN24DB_UpdateItemMakingSkill8dispatchEiiP6Stream
#           DB_UpdateItemMakingSkill::dispatch(int, int, Stream*)
# range [0x08440f3e, 0x084411ff]
08440f3e +0x000:  push   %ebp
08440f3f +0x001:  mov    %esp,%ebp
08440f41 +0x003:  push   %edi
08440f42 +0x004:  push   %esi
08440f43 +0x005:  push   %ebx
08440f44 +0x006:  sub    $0xac,%esp
08440f4a +0x00c:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08440f4f +0x011:  movl   $0x0,0x8(%esp)
08440f57 +0x019:  movl   $0x2,0x4(%esp)
08440f5f +0x021:  mov    %eax,(%esp)
08440f62 +0x024:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08440f67 +0x029:  mov    %eax,-0x20(%ebp)
08440f6a +0x02c:  mov    0x14(%ebp),%eax
08440f6d +0x02f:  mov    %eax,(%esp)
08440f70 +0x032:  call   08453d22 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6938>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6938
08440f75 +0x037:  mov    %eax,-0x1c(%ebp)
08440f78 +0x03a:  mov    -0x1c(%ebp),%eax
08440f7b +0x03d:  mov    (%eax),%edi
08440f7d +0x03f:  mov    -0x1c(%ebp),%eax
08440f80 +0x042:  movzwl 0x18(%eax),%eax
08440f84 +0x046:  cwtl
08440f85 +0x047:  mov    %eax,-0x78(%ebp)
08440f88 +0x04a:  mov    -0x1c(%ebp),%eax
08440f8b +0x04d:  movzwl 0x16(%eax),%eax
08440f8f +0x051:  cwtl
08440f90 +0x052:  mov    %eax,-0x74(%ebp)
08440f93 +0x055:  mov    -0x1c(%ebp),%eax
08440f96 +0x058:  movzwl 0x14(%eax),%eax
08440f9a +0x05c:  cwtl
08440f9b +0x05d:  mov    %eax,-0x70(%ebp)
08440f9e +0x060:  mov    -0x1c(%ebp),%eax
08440fa1 +0x063:  movzwl 0x12(%eax),%eax
08440fa5 +0x067:  cwtl
08440fa6 +0x068:  mov    %eax,-0x6c(%ebp)
08440fa9 +0x06b:  mov    -0x1c(%ebp),%eax
08440fac +0x06e:  movzwl 0x10(%eax),%eax
08440fb0 +0x072:  cwtl
08440fb1 +0x073:  mov    %eax,-0x68(%ebp)
08440fb4 +0x076:  mov    -0x1c(%ebp),%eax
08440fb7 +0x079:  movzwl 0xe(%eax),%eax
08440fbb +0x07d:  cwtl
08440fbc +0x07e:  mov    %eax,-0x64(%ebp)
08440fbf +0x081:  mov    -0x1c(%ebp),%eax
08440fc2 +0x084:  movzwl 0xc(%eax),%eax
08440fc6 +0x088:  movswl %ax,%esi
08440fc9 +0x08b:  mov    -0x1c(%ebp),%eax
08440fcc +0x08e:  movzwl 0xa(%eax),%eax
08440fd0 +0x092:  movswl %ax,%ebx
08440fd3 +0x095:  mov    -0x1c(%ebp),%eax
08440fd6 +0x098:  movzwl 0x8(%eax),%eax
08440fda +0x09c:  movswl %ax,%ecx
08440fdd +0x09f:  mov    -0x1c(%ebp),%eax
08440fe0 +0x0a2:  movzwl 0x6(%eax),%eax
08440fe4 +0x0a6:  movswl %ax,%edx
08440fe7 +0x0a9:  mov    -0x1c(%ebp),%eax
08440fea +0x0ac:  movzwl 0x4(%eax),%eax
08440fee +0x0b0:  cwtl
08440fef +0x0b1:  mov    %edi,0x34(%esp)
08440ff3 +0x0b5:  mov    -0x78(%ebp),%edi
08440ff6 +0x0b8:  mov    %edi,0x30(%esp)
08440ffa +0x0bc:  mov    -0x74(%ebp),%edi
08440ffd +0x0bf:  mov    %edi,0x2c(%esp)
08441001 +0x0c3:  mov    -0x70(%ebp),%edi
08441004 +0x0c6:  mov    %edi,0x28(%esp)
08441008 +0x0ca:  mov    -0x6c(%ebp),%edi
0844100b +0x0cd:  mov    %edi,0x24(%esp)
0844100f +0x0d1:  mov    -0x68(%ebp),%edi
08441012 +0x0d4:  mov    %edi,0x20(%esp)
08441016 +0x0d8:  mov    -0x64(%ebp),%edi
08441019 +0x0db:  mov    %edi,0x1c(%esp)
0844101d +0x0df:  mov    %esi,0x18(%esp)
08441021 +0x0e3:  mov    %ebx,0x14(%esp)
08441025 +0x0e7:  mov    %ecx,0x10(%esp)
08441029 +0x0eb:  mov    %edx,0xc(%esp)
0844102d +0x0ef:  mov    %eax,0x8(%esp)
08441031 +0x0f3:  movl   $"upDate item_making_skill_info set weapon=%d, cloth=%d, leather=%d, light_armor=%d, heavy_armor=%d, plate=%d, amulet=%d, wrist=%d, ring=%d, support=%d, magic_stone=%d where charac_no =%u",0x4(%esp)
08441039 +0x0fb:  mov    -0x20(%ebp),%eax
0844103c +0x0fe:  mov    %eax,(%esp)
0844103f +0x101:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08441044 +0x106:  movl   $0x1,0x4(%esp)
0844104c +0x10e:  mov    -0x20(%ebp),%eax
0844104f +0x111:  mov    %eax,(%esp)
08441052 +0x114:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08441057 +0x119:  xor    $0x1,%eax
0844105a +0x11c:  test   %al,%al
0844105c +0x11e:  je     084410a7 <+0x169>
0844105e +0x120:  mov    -0x1c(%ebp),%eax
08441061 +0x123:  mov    (%eax),%ebx
08441063 +0x125:  movl   $0x5,0xc(%esp)
0844106b +0x12d:  movl   $0x9fde,0x8(%esp)
08441073 +0x135:  movl   $&_ZZN24DB_UpdateItemMakingSkill8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
0844107b +0x13d:  lea    -0x40(%ebp),%eax
0844107e +0x140:  mov    %eax,(%esp)
08441081 +0x143:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08441086 +0x148:  mov    %ebx,0x8(%esp)
0844108a +0x14c:  movl   $"DB_UpdateItemMakingSkill::UpdateItemMakingSkill update, exec() ERROR charac_no=%u",0x4(%esp)
08441092 +0x154:  lea    -0x40(%ebp),%eax
08441095 +0x157:  mov    %eax,(%esp)
08441098 +0x15a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0844109d +0x15f:  mov    $0x0,%eax
084410a2 +0x164:  jmp    084411f4 <+0x2b6>
084410a7 +0x169:  mov    -0x20(%ebp),%eax
084410aa +0x16c:  mov    %eax,(%esp)
084410ad +0x16f:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
084410b2 +0x174:  or     %edx,%eax
084410b4 +0x176:  test   %eax,%eax
084410b6 +0x178:  sete   %al
084410b9 +0x17b:  test   %al,%al
084410bb +0x17d:  je     084411ef <+0x2b1>
084410c1 +0x183:  mov    -0x1c(%ebp),%eax
084410c4 +0x186:  movzwl 0x18(%eax),%eax
084410c8 +0x18a:  movswl %ax,%edi
084410cb +0x18d:  mov    -0x1c(%ebp),%eax
084410ce +0x190:  movzwl 0x16(%eax),%eax
084410d2 +0x194:  cwtl
084410d3 +0x195:  mov    %eax,-0x60(%ebp)
084410d6 +0x198:  mov    -0x1c(%ebp),%eax
084410d9 +0x19b:  movzwl 0x14(%eax),%eax
084410dd +0x19f:  cwtl
084410de +0x1a0:  mov    %eax,-0x5c(%ebp)
084410e1 +0x1a3:  mov    -0x1c(%ebp),%eax
084410e4 +0x1a6:  movzwl 0x12(%eax),%eax
084410e8 +0x1aa:  cwtl
084410e9 +0x1ab:  mov    %eax,-0x58(%ebp)
084410ec +0x1ae:  mov    -0x1c(%ebp),%eax
084410ef +0x1b1:  movzwl 0x10(%eax),%eax
084410f3 +0x1b5:  cwtl
084410f4 +0x1b6:  mov    %eax,-0x54(%ebp)
084410f7 +0x1b9:  mov    -0x1c(%ebp),%eax
084410fa +0x1bc:  movzwl 0xe(%eax),%eax
084410fe +0x1c0:  cwtl
084410ff +0x1c1:  mov    %eax,-0x50(%ebp)
08441102 +0x1c4:  mov    -0x1c(%ebp),%eax
08441105 +0x1c7:  movzwl 0xc(%eax),%eax
08441109 +0x1cb:  cwtl
0844110a +0x1cc:  mov    %eax,-0x4c(%ebp)
0844110d +0x1cf:  mov    -0x1c(%ebp),%eax
08441110 +0x1d2:  movzwl 0xa(%eax),%eax
08441114 +0x1d6:  movswl %ax,%esi
08441117 +0x1d9:  mov    -0x1c(%ebp),%eax
0844111a +0x1dc:  movzwl 0x8(%eax),%eax
0844111e +0x1e0:  movswl %ax,%ebx
08441121 +0x1e3:  mov    -0x1c(%ebp),%eax
08441124 +0x1e6:  movzwl 0x6(%eax),%eax
08441128 +0x1ea:  movswl %ax,%ecx
0844112b +0x1ed:  mov    -0x1c(%ebp),%eax
0844112e +0x1f0:  movzwl 0x4(%eax),%eax
08441132 +0x1f4:  movswl %ax,%edx
08441135 +0x1f7:  mov    -0x1c(%ebp),%eax
08441138 +0x1fa:  mov    (%eax),%eax
0844113a +0x1fc:  mov    %edi,0x34(%esp)
0844113e +0x200:  mov    -0x60(%ebp),%edi
08441141 +0x203:  mov    %edi,0x30(%esp)
08441145 +0x207:  mov    -0x5c(%ebp),%edi
08441148 +0x20a:  mov    %edi,0x2c(%esp)
0844114c +0x20e:  mov    -0x58(%ebp),%edi
0844114f +0x211:  mov    %edi,0x28(%esp)
08441153 +0x215:  mov    -0x54(%ebp),%edi
08441156 +0x218:  mov    %edi,0x24(%esp)
0844115a +0x21c:  mov    -0x50(%ebp),%edi
0844115d +0x21f:  mov    %edi,0x20(%esp)
08441161 +0x223:  mov    -0x4c(%ebp),%edi
08441164 +0x226:  mov    %edi,0x1c(%esp)
08441168 +0x22a:  mov    %esi,0x18(%esp)
0844116c +0x22e:  mov    %ebx,0x14(%esp)
08441170 +0x232:  mov    %ecx,0x10(%esp)
08441174 +0x236:  mov    %edx,0xc(%esp)
08441178 +0x23a:  mov    %eax,0x8(%esp)
0844117c +0x23e:  movl   $"inSert into item_making_skill_info (charac_no, weapon, cloth, leather, light_armor, heavy_armor, plate, amulet, wrist, ring, support, magic_stone) values(%u, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d )",0x4(%esp)
08441184 +0x246:  mov    -0x20(%ebp),%eax
08441187 +0x249:  mov    %eax,(%esp)
0844118a +0x24c:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0844118f +0x251:  movl   $0x1,0x4(%esp)
08441197 +0x259:  mov    -0x20(%ebp),%eax
0844119a +0x25c:  mov    %eax,(%esp)
0844119d +0x25f:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084411a2 +0x264:  xor    $0x1,%eax
084411a5 +0x267:  test   %al,%al
084411a7 +0x269:  je     084411ef <+0x2b1>
084411a9 +0x26b:  mov    -0x1c(%ebp),%eax
084411ac +0x26e:  mov    (%eax),%ebx
084411ae +0x270:  movl   $0x5,0xc(%esp)
084411b6 +0x278:  movl   $0x9ff5,0x8(%esp)
084411be +0x280:  movl   $&_ZZN24DB_UpdateItemMakingSkill8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
084411c6 +0x288:  lea    -0x30(%ebp),%eax
084411c9 +0x28b:  mov    %eax,(%esp)
084411cc +0x28e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084411d1 +0x293:  mov    %ebx,0x8(%esp)
084411d5 +0x297:  movl   $"DB_UpdateItemMakingSkill::InsertItemMakingSkill insert, exec() ERROR charac_no=%u",0x4(%esp)
084411dd +0x29f:  lea    -0x30(%ebp),%eax
084411e0 +0x2a2:  mov    %eax,(%esp)
084411e3 +0x2a5:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084411e8 +0x2aa:  mov    $0x0,%eax
084411ed +0x2af:  jmp    084411f4 <+0x2b6>
084411ef +0x2b1:  mov    $0x1,%eax
084411f4 +0x2b6:  add    $0xac,%esp
084411fa +0x2bc:  pop    %ebx
084411fb +0x2bd:  pop    %esi
084411fc +0x2be:  pop    %edi
084411fd +0x2bf:  pop    %ebp
084411fe +0x2c0:  ret
084411ff +0x2c1:  nop
```

## 反编译 C

```c
// DB_UpdateItemMakingSkill::dispatch @ 0x8440f3e

/* DB_UpdateItemMakingSkill::dispatch(int, int, Stream*) */

undefined4 DB_UpdateItemMakingSkill::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  Stream *in_stack_00000010;
  cMyTrace local_44 [16];
  cMyTrace local_34 [16];
  MySQL *local_24;
  SIG_ITEM_MAKING_SKILL *local_20;
  
  local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  local_20 = Stream::GetOutBuffer<SIG_ITEM_MAKING_SKILL>(in_stack_00000010);
  MySQL::set_query(local_24,
                   "upDate item_making_skill_info set weapon=%d, cloth=%d, leather=%d, light_armor=%d, heavy_armor=%d, plate=%d, amulet=%d, wrist=%d, ring=%d, support=%d, magic_stone=%d where charac_no =%u"
                   ,(int)*(short *)(local_20 + 4),(int)*(short *)(local_20 + 6),
                   (int)*(short *)(local_20 + 8),(int)*(short *)(local_20 + 10),
                   (int)*(short *)(local_20 + 0xc),(int)*(short *)(local_20 + 0xe),
                   (int)*(short *)(local_20 + 0x10),(int)*(short *)(local_20 + 0x12),
                   (int)*(short *)(local_20 + 0x14),(int)*(short *)(local_20 + 0x16),
                   (int)*(short *)(local_20 + 0x18),*(undefined4 *)local_20);
  cVar1 = MySQL::exec(local_24,true);
  if (cVar1 == '\x01') {
    lVar3 = MySQL::getAffectedRowCount(local_24);
    if (lVar3 == 0) {
      MySQL::set_query(local_24,
                       "inSert into item_making_skill_info (charac_no, weapon, cloth, leather, light_armor, heavy_armor, plate, amulet, wrist, ring, support, magic_stone) values(%u, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d )"
                       ,*(undefined4 *)local_20,(int)*(short *)(local_20 + 4),
                       (int)*(short *)(local_20 + 6),(int)*(short *)(local_20 + 8),
                       (int)*(short *)(local_20 + 10),(int)*(short *)(local_20 + 0xc),
                       (int)*(short *)(local_20 + 0xe),(int)*(short *)(local_20 + 0x10),
                       (int)*(short *)(local_20 + 0x12),(int)*(short *)(local_20 + 0x14),
                       (int)*(short *)(local_20 + 0x16),(int)*(short *)(local_20 + 0x18));
      cVar1 = MySQL::exec(local_24,true);
      if (cVar1 != '\x01') {
        uVar2 = *(undefined4 *)local_20;
        cMyTrace::cMyTrace(local_34,
                           "virtual bool DB_UpdateItemMakingSkill::dispatch(int, int, Stream*)",
                           0x9ff5,5);
        cMyTrace::operator()
                  (local_34,
                   "DB_UpdateItemMakingSkill::InsertItemMakingSkill insert, exec() ERROR charac_no=%u"
                   ,uVar2);
        return 0;
      }
    }
    uVar2 = 1;
  }
  else {
    uVar2 = *(undefined4 *)local_20;
    cMyTrace::cMyTrace(local_44,"virtual bool DB_UpdateItemMakingSkill::dispatch(int, int, Stream*)"
                       ,0x9fde,5);
    cMyTrace::operator()
              (local_44,
               "DB_UpdateItemMakingSkill::UpdateItemMakingSkill update, exec() ERROR charac_no=%u",
               uVar2);
    uVar2 = 0;
  }
  return uVar2;
}
```
