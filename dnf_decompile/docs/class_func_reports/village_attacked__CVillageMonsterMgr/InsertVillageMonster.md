# InsertVillageMonster

`_ZN16village_attacked18CVillageMonsterMgr20InsertVillageMonsterEiiiiPSt6vectorI17STAttackedMonsterSaIS2_EEPS1_I7MapAreaSaIS6_EE`

`village_attacked::CVillageMonsterMgr::InsertVillageMonster(int, int, int, int, std::vector<STAttackedMonster, std::allocator<STAttackedMonster> >*, std::vector<MapArea, std::allocator<MapArea> >*)`

| 类 | 地址 |
|---|---|
| `village_attacked::CVillageMonsterMgr` | `0x086b4144` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086b4144  _ZN16village_attacked18CVillageMonsterMgr20InsertVillageMonsterEiiiiPSt6vectorI17STAttackedMonsterSaIS2_EEPS1_I7MapAreaSaIS6_EE
#           village_attacked::CVillageMonsterMgr::InsertVillageMonster(int, int, int, int, std::vector<STAttackedMonster, std::allocator<STAttackedMonster> >*, std::vector<MapArea, std::allocator<MapArea> >*)
# range [0x086b4144, 0x086b427f]
086b4144 +0x000:  push   %ebp
086b4145 +0x001:  mov    %esp,%ebp
086b4147 +0x003:  push   %esi
086b4148 +0x004:  push   %ebx
086b4149 +0x005:  sub    $0xf0,%esp
086b414f +0x00b:  mov    0x20(%ebp),%eax
086b4152 +0x00e:  mov    %eax,0x18(%esp)
086b4156 +0x012:  mov    0x1c(%ebp),%eax
086b4159 +0x015:  mov    %eax,0x14(%esp)
086b415d +0x019:  mov    0x18(%ebp),%eax
086b4160 +0x01c:  mov    %eax,0x10(%esp)
086b4164 +0x020:  mov    0x14(%ebp),%eax
086b4167 +0x023:  mov    %eax,0xc(%esp)
086b416b +0x027:  mov    0x10(%ebp),%eax
086b416e +0x02a:  mov    %eax,0x8(%esp)
086b4172 +0x02e:  mov    0xc(%ebp),%eax
086b4175 +0x031:  mov    %eax,0x4(%esp)
086b4179 +0x035:  lea    -0x48(%ebp),%eax
086b417c +0x038:  mov    %eax,(%esp)
086b417f +0x03b:  call   086b3752 <_ZN16village_attacked19CVillageMonsterAreaC1EiiiiPSt6vectorI17STAttackedMonsterSaIS2_EEPS1_I7MapAreaSaIS6_EE>  ; village_attacked::CVillageMonsterArea::CVillageMonsterArea(int, int, int, int, std::vector<STAttackedMonster, std::allocator<STAttackedMonster> >*, std::vector<MapArea, std::allocator<MapArea> >*)
086b4184 +0x040:  mov    0x10(%ebp),%eax
086b4187 +0x043:  movzbl %al,%edx
086b418a +0x046:  mov    0xc(%ebp),%eax
086b418d +0x049:  movzbl %al,%eax
086b4190 +0x04c:  mov    %edx,0x8(%esp)
086b4194 +0x050:  mov    %eax,0x4(%esp)
086b4198 +0x054:  lea    -0xa(%ebp),%eax
086b419b +0x057:  mov    %eax,(%esp)
086b419e +0x05a:  call   086b4b3c <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x66>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x66
086b41a3 +0x05f:  lea    -0x88(%ebp),%eax
086b41a9 +0x065:  lea    -0x48(%ebp),%edx
086b41ac +0x068:  mov    %edx,0x8(%esp)
086b41b0 +0x06c:  lea    -0xa(%ebp),%edx
086b41b3 +0x06f:  mov    %edx,0x4(%esp)
086b41b7 +0x073:  mov    %eax,(%esp)
086b41ba +0x076:  call   086b52ac <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x7d6>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x7d6
086b41bf +0x07b:  sub    $0x4,%esp
086b41c2 +0x07e:  lea    -0x88(%ebp),%eax
086b41c8 +0x084:  mov    %eax,0x4(%esp)
086b41cc +0x088:  lea    -0xc8(%ebp),%eax
086b41d2 +0x08e:  mov    %eax,(%esp)
086b41d5 +0x091:  call   086b538c <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x8b6>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x8b6
086b41da +0x096:  mov    0x8(%ebp),%eax
086b41dd +0x099:  lea    0x8(%eax),%ecx
086b41e0 +0x09c:  lea    -0xd0(%ebp),%eax
086b41e6 +0x0a2:  lea    -0xc8(%ebp),%edx
086b41ec +0x0a8:  mov    %edx,0x8(%esp)
086b41f0 +0x0ac:  mov    %ecx,0x4(%esp)
086b41f4 +0x0b0:  mov    %eax,(%esp)
086b41f7 +0x0b3:  call   086b53ce <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x8f8>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x8f8
086b41fc +0x0b8:  sub    $0x4,%esp
086b41ff +0x0bb:  lea    -0xc8(%ebp),%eax
086b4205 +0x0c1:  mov    %eax,(%esp)
086b4208 +0x0c4:  call   086b4ca0 <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x1ca>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x1ca
086b420d +0x0c9:  jmp    086b423f <+0xfb>
086b420f +0x0cb:  mov    %edx,%ebx
086b4211 +0x0cd:  mov    %eax,%esi
086b4213 +0x0cf:  lea    -0xc8(%ebp),%eax
086b4219 +0x0d5:  mov    %eax,(%esp)
086b421c +0x0d8:  call   086b4ca0 <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x1ca>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x1ca
086b4221 +0x0dd:  mov    %esi,%eax
086b4223 +0x0df:  mov    %ebx,%edx
086b4225 +0x0e1:  jmp    086b4227 <+0xe3>
086b4227 +0x0e3:  mov    %edx,%ebx
086b4229 +0x0e5:  mov    %eax,%esi
086b422b +0x0e7:  lea    -0x88(%ebp),%eax
086b4231 +0x0ed:  mov    %eax,(%esp)
086b4234 +0x0f0:  call   086b4c8a <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x1b4>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x1b4
086b4239 +0x0f5:  mov    %esi,%eax
086b423b +0x0f7:  mov    %ebx,%edx
086b423d +0x0f9:  jmp    086b424f <+0x10b>
086b423f +0x0fb:  lea    -0x88(%ebp),%eax
086b4245 +0x101:  mov    %eax,(%esp)
086b4248 +0x104:  call   086b4c8a <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x1b4>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x1b4
086b424d +0x109:  jmp    086b426a <+0x126>
086b424f +0x10b:  mov    %edx,%ebx
086b4251 +0x10d:  mov    %eax,%esi
086b4253 +0x10f:  lea    -0x48(%ebp),%eax
086b4256 +0x112:  mov    %eax,(%esp)
086b4259 +0x115:  call   086b4c44 <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x16e>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x16e
086b425e +0x11a:  mov    %esi,%eax
086b4260 +0x11c:  mov    %ebx,%edx
086b4262 +0x11e:  mov    %eax,(%esp)
086b4265 +0x121:  call   08ae3750 <_Unwind_Resume>
086b426a +0x126:  lea    -0x48(%ebp),%eax
086b426d +0x129:  mov    %eax,(%esp)
086b4270 +0x12c:  call   086b4c44 <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x16e>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x16e
086b4275 +0x131:  lea    -0x8(%ebp),%esp
086b4278 +0x134:  add    $0x0,%esp
086b427b +0x137:  pop    %ebx
086b427c +0x138:  pop    %esi
086b427d +0x139:  pop    %ebp
086b427e +0x13a:  ret
086b427f +0x13b:  nop
```

## 反编译 C

```c
// village_attacked::CVillageMonsterMgr::InsertVillageMonster @ 0x86b4144

/* village_attacked::CVillageMonsterMgr::InsertVillageMonster(int, int, int, int,
   std::vector<STAttackedMonster, std::allocator<STAttackedMonster> >*, std::vector<MapArea,
   std::allocator<MapArea> >*) */

void __thiscall
village_attacked::CVillageMonsterMgr::InsertVillageMonster
          (CVillageMonsterMgr *this,int param_1,int param_2,int param_3,int param_4,vector *param_5,
          vector *param_6)

{
  pair local_d4 [8];
  pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea> local_cc [64];
  Zone local_8c [64];
  CVillageMonsterArea local_4c [62];
  Zone local_e [2];
  
  CVillageMonsterArea::CVillageMonsterArea(local_4c,param_1,param_2,param_3,param_4,param_5,param_6)
  ;
  Zone::Zone(local_e,(uchar)param_1,(uchar)param_2);
                    /* try { // try from 086b41ba to 086b41be has its CatchHandler @ 086b424f */
  std::make_pair<village_attacked::Zone,village_attacked::CVillageMonsterArea>
            (local_8c,(CVillageMonsterArea *)local_e);
                    /* try { // try from 086b41d5 to 086b41d9 has its CatchHandler @ 086b4227 */
  std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>::
  pair<village_attacked::Zone,village_attacked::CVillageMonsterArea>(local_cc,local_8c);
                    /* try { // try from 086b41f7 to 086b41fb has its CatchHandler @ 086b420f */
  std::
  map<village_attacked::Zone,village_attacked::CVillageMonsterArea,std::less<village_attacked::Zone>,std::allocator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>>
  ::insert(local_d4);
                    /* try { // try from 086b4208 to 086b420c has its CatchHandler @ 086b4227 */
  std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>::~pair(local_cc);
                    /* try { // try from 086b4248 to 086b424c has its CatchHandler @ 086b424f */
  std::pair<village_attacked::Zone,village_attacked::CVillageMonsterArea>::~pair
            ((pair<village_attacked::Zone,village_attacked::CVillageMonsterArea> *)local_8c);
  CVillageMonsterArea::~CVillageMonsterArea(local_4c);
  return;
}
```
