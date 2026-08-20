# ~TutorialData

`_ZN12TutorialDataD1Ev`

`TutorialData::~TutorialData()`

| 类 | 地址 |
|---|---|
| `TutorialData` | `0x08ab80ee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ab80ee  _ZN12TutorialDataD1Ev
#           TutorialData::~TutorialData()
# range [0x08ab80ee, 0x08ab82c3]
08ab80ee +0x000:  push   %ebp
08ab80ef +0x001:  mov    %esp,%ebp
08ab80f1 +0x003:  push   %edi
08ab80f2 +0x004:  push   %esi
08ab80f3 +0x005:  push   %ebx
08ab80f4 +0x006:  sub    $0x1c,%esp
08ab80f7 +0x009:  mov    0x8(%ebp),%eax
08ab80fa +0x00c:  add    $0x13c,%eax
08ab80ff +0x011:  mov    %eax,(%esp)
08ab8102 +0x014:  call   08ab9a94 <_GLOBAL__I__ZN12TutorialDataC2Ev+0x2cf>  ; global constructors keyed to TutorialData::TutorialData()+0x2cf
08ab8107 +0x019:  jmp    08ab8123 <+0x35>
08ab8109 +0x01b:  mov    %edx,%ebx
08ab810b +0x01d:  mov    %eax,%esi
08ab810d +0x01f:  mov    0x8(%ebp),%eax
08ab8110 +0x022:  add    $0x124,%eax
08ab8115 +0x027:  mov    %eax,(%esp)
08ab8118 +0x02a:  call   08ab980a <_GLOBAL__I__ZN12TutorialDataC2Ev+0x45>  ; global constructors keyed to TutorialData::TutorialData()+0x45
08ab811d +0x02f:  mov    %esi,%eax
08ab811f +0x031:  mov    %ebx,%edx
08ab8121 +0x033:  jmp    08ab8135 <+0x47>
08ab8123 +0x035:  mov    0x8(%ebp),%eax
08ab8126 +0x038:  add    $0x124,%eax
08ab812b +0x03d:  mov    %eax,(%esp)
08ab812e +0x040:  call   08ab980a <_GLOBAL__I__ZN12TutorialDataC2Ev+0x45>  ; global constructors keyed to TutorialData::TutorialData()+0x45
08ab8133 +0x045:  jmp    08ab816f <+0x81>
08ab8135 +0x047:  mov    %edx,%esi
08ab8137 +0x049:  mov    %eax,%edi
08ab8139 +0x04b:  mov    0x8(%ebp),%eax
08ab813c +0x04e:  add    $0xf4,%eax
08ab8141 +0x053:  test   %eax,%eax
08ab8143 +0x055:  je     08ab8169 <+0x7b>
08ab8145 +0x057:  mov    0x8(%ebp),%eax
08ab8148 +0x05a:  add    $0xf4,%eax
08ab814d +0x05f:  lea    0x30(%eax),%ebx
08ab8150 +0x062:  mov    0x8(%ebp),%eax
08ab8153 +0x065:  add    $0xf4,%eax
08ab8158 +0x06a:  cmp    %eax,%ebx
08ab815a +0x06c:  je     08ab8169 <+0x7b>
08ab815c +0x06e:  sub    $0xc,%ebx
08ab815f +0x071:  mov    %ebx,(%esp)
08ab8162 +0x074:  call   08ab99a8 <_GLOBAL__I__ZN12TutorialDataC2Ev+0x1e3>  ; global constructors keyed to TutorialData::TutorialData()+0x1e3
08ab8167 +0x079:  jmp    08ab8150 <+0x62>
08ab8169 +0x07b:  mov    %edi,%eax
08ab816b +0x07d:  mov    %esi,%edx
08ab816d +0x07f:  jmp    08ab819f <+0xb1>
08ab816f +0x081:  mov    0x8(%ebp),%eax
08ab8172 +0x084:  add    $0xf4,%eax
08ab8177 +0x089:  test   %eax,%eax
08ab8179 +0x08b:  je     08ab81d9 <+0xeb>
08ab817b +0x08d:  mov    0x8(%ebp),%eax
08ab817e +0x090:  add    $0xf4,%eax
08ab8183 +0x095:  lea    0x30(%eax),%ebx
08ab8186 +0x098:  mov    0x8(%ebp),%eax
08ab8189 +0x09b:  add    $0xf4,%eax
08ab818e +0x0a0:  cmp    %eax,%ebx
08ab8190 +0x0a2:  je     08ab81d9 <+0xeb>
08ab8192 +0x0a4:  sub    $0xc,%ebx
08ab8195 +0x0a7:  mov    %ebx,(%esp)
08ab8198 +0x0aa:  call   08ab99a8 <_GLOBAL__I__ZN12TutorialDataC2Ev+0x1e3>  ; global constructors keyed to TutorialData::TutorialData()+0x1e3
08ab819d +0x0af:  jmp    08ab8186 <+0x98>
08ab819f +0x0b1:  mov    %edx,%esi
08ab81a1 +0x0b3:  mov    %eax,%edi
08ab81a3 +0x0b5:  mov    0x8(%ebp),%eax
08ab81a6 +0x0b8:  add    $0x94,%eax
08ab81ab +0x0bd:  test   %eax,%eax
08ab81ad +0x0bf:  je     08ab81d3 <+0xe5>
08ab81af +0x0c1:  mov    0x8(%ebp),%eax
08ab81b2 +0x0c4:  add    $0x94,%eax
08ab81b7 +0x0c9:  lea    0x60(%eax),%ebx
08ab81ba +0x0cc:  mov    0x8(%ebp),%eax
08ab81bd +0x0cf:  add    $0x94,%eax
08ab81c2 +0x0d4:  cmp    %eax,%ebx
08ab81c4 +0x0d6:  je     08ab81d3 <+0xe5>
08ab81c6 +0x0d8:  sub    $0x18,%ebx
08ab81c9 +0x0db:  mov    %ebx,(%esp)
08ab81cc +0x0de:  call   08ab97f6 <_GLOBAL__I__ZN12TutorialDataC2Ev+0x31>  ; global constructors keyed to TutorialData::TutorialData()+0x31
08ab81d1 +0x0e3:  jmp    08ab81ba <+0xcc>
08ab81d3 +0x0e5:  mov    %edi,%eax
08ab81d5 +0x0e7:  mov    %esi,%edx
08ab81d7 +0x0e9:  jmp    08ab8209 <+0x11b>
08ab81d9 +0x0eb:  mov    0x8(%ebp),%eax
08ab81dc +0x0ee:  add    $0x94,%eax
08ab81e1 +0x0f3:  test   %eax,%eax
08ab81e3 +0x0f5:  je     08ab823d <+0x14f>
08ab81e5 +0x0f7:  mov    0x8(%ebp),%eax
08ab81e8 +0x0fa:  add    $0x94,%eax
08ab81ed +0x0ff:  lea    0x60(%eax),%ebx
08ab81f0 +0x102:  mov    0x8(%ebp),%eax
08ab81f3 +0x105:  add    $0x94,%eax
08ab81f8 +0x10a:  cmp    %eax,%ebx
08ab81fa +0x10c:  je     08ab823d <+0x14f>
08ab81fc +0x10e:  sub    $0x18,%ebx
08ab81ff +0x111:  mov    %ebx,(%esp)
08ab8202 +0x114:  call   08ab97f6 <_GLOBAL__I__ZN12TutorialDataC2Ev+0x31>  ; global constructors keyed to TutorialData::TutorialData()+0x31
08ab8207 +0x119:  jmp    08ab81f0 <+0x102>
08ab8209 +0x11b:  mov    %edx,%esi
08ab820b +0x11d:  mov    %eax,%edi
08ab820d +0x11f:  mov    0x8(%ebp),%eax
08ab8210 +0x122:  add    $0x34,%eax
08ab8213 +0x125:  test   %eax,%eax
08ab8215 +0x127:  je     08ab8237 <+0x149>
08ab8217 +0x129:  mov    0x8(%ebp),%eax
08ab821a +0x12c:  add    $0x34,%eax
08ab821d +0x12f:  lea    0x60(%eax),%ebx
08ab8220 +0x132:  mov    0x8(%ebp),%eax
08ab8223 +0x135:  add    $0x34,%eax
08ab8226 +0x138:  cmp    %eax,%ebx
08ab8228 +0x13a:  je     08ab8237 <+0x149>
08ab822a +0x13c:  sub    $0x18,%ebx
08ab822d +0x13f:  mov    %ebx,(%esp)
08ab8230 +0x142:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
08ab8235 +0x147:  jmp    08ab8220 <+0x132>
08ab8237 +0x149:  mov    %edi,%eax
08ab8239 +0x14b:  mov    %esi,%edx
08ab823b +0x14d:  jmp    08ab8267 <+0x179>
08ab823d +0x14f:  mov    0x8(%ebp),%eax
08ab8240 +0x152:  add    $0x34,%eax
08ab8243 +0x155:  test   %eax,%eax
08ab8245 +0x157:  je     08ab827f <+0x191>
08ab8247 +0x159:  mov    0x8(%ebp),%eax
08ab824a +0x15c:  add    $0x34,%eax
08ab824d +0x15f:  lea    0x60(%eax),%ebx
08ab8250 +0x162:  mov    0x8(%ebp),%eax
08ab8253 +0x165:  add    $0x34,%eax
08ab8256 +0x168:  cmp    %eax,%ebx
08ab8258 +0x16a:  je     08ab827f <+0x191>
08ab825a +0x16c:  sub    $0x18,%ebx
08ab825d +0x16f:  mov    %ebx,(%esp)
08ab8260 +0x172:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
08ab8265 +0x177:  jmp    08ab8250 <+0x162>
08ab8267 +0x179:  mov    %edx,%ebx
08ab8269 +0x17b:  mov    %eax,%esi
08ab826b +0x17d:  mov    0x8(%ebp),%eax
08ab826e +0x180:  add    $0x1c,%eax
08ab8271 +0x183:  mov    %eax,(%esp)
08ab8274 +0x186:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
08ab8279 +0x18b:  mov    %esi,%eax
08ab827b +0x18d:  mov    %ebx,%edx
08ab827d +0x18f:  jmp    08ab828f <+0x1a1>
08ab827f +0x191:  mov    0x8(%ebp),%eax
08ab8282 +0x194:  add    $0x1c,%eax
08ab8285 +0x197:  mov    %eax,(%esp)
08ab8288 +0x19a:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
08ab828d +0x19f:  jmp    08ab82ad <+0x1bf>
08ab828f +0x1a1:  mov    %edx,%ebx
08ab8291 +0x1a3:  mov    %eax,%esi
08ab8293 +0x1a5:  mov    0x8(%ebp),%eax
08ab8296 +0x1a8:  add    $0x4,%eax
08ab8299 +0x1ab:  mov    %eax,(%esp)
08ab829c +0x1ae:  call   08ab97e2 <_GLOBAL__I__ZN12TutorialDataC2Ev+0x1d>  ; global constructors keyed to TutorialData::TutorialData()+0x1d
08ab82a1 +0x1b3:  mov    %esi,%eax
08ab82a3 +0x1b5:  mov    %ebx,%edx
08ab82a5 +0x1b7:  mov    %eax,(%esp)
08ab82a8 +0x1ba:  call   08ae3750 <_Unwind_Resume>
08ab82ad +0x1bf:  mov    0x8(%ebp),%eax
08ab82b0 +0x1c2:  add    $0x4,%eax
08ab82b3 +0x1c5:  mov    %eax,(%esp)
08ab82b6 +0x1c8:  call   08ab97e2 <_GLOBAL__I__ZN12TutorialDataC2Ev+0x1d>  ; global constructors keyed to TutorialData::TutorialData()+0x1d
08ab82bb +0x1cd:  add    $0x1c,%esp
08ab82be +0x1d0:  pop    %ebx
08ab82bf +0x1d1:  pop    %esi
08ab82c0 +0x1d2:  pop    %edi
08ab82c1 +0x1d3:  pop    %ebp
08ab82c2 +0x1d4:  ret
08ab82c3 +0x1d5:  nop
```

## 反编译 C

```c
// TutorialData::~TutorialData @ 0x8ab80ee

/* TutorialData::~TutorialData() */

void __thiscall TutorialData::~TutorialData(TutorialData *this)

{
  vector<TutorialData::SkillData*,std::allocator<TutorialData::SkillData*>> *this_00;
  map<int,TutorialData::SkillData*,std::less<int>,std::allocator<std::pair<int_const,TutorialData::SkillData*>>>
  *this_01;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *this_02;
  
                    /* try { // try from 08ab8102 to 08ab8106 has its CatchHandler @ 08ab8109 */
  std::vector<TutorialData::ItemData*,std::allocator<TutorialData::ItemData*>>::~vector
            ((vector<TutorialData::ItemData*,std::allocator<TutorialData::ItemData*>> *)
             (this + 0x13c));
                    /* try { // try from 08ab812e to 08ab8132 has its CatchHandler @ 08ab8135 */
  std::
  map<int,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>>>>
  ::~map((map<int,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>>>>
          *)(this + 0x124));
  if (this != (TutorialData *)0xffffff0c) {
    this_00 = (vector<TutorialData::SkillData*,std::allocator<TutorialData::SkillData*>> *)
              (this + 0x124);
    while (this_00 !=
           (vector<TutorialData::SkillData*,std::allocator<TutorialData::SkillData*>> *)
           (this + 0xf4)) {
      this_00 = this_00 + -0xc;
                    /* try { // try from 08ab8198 to 08ab819c has its CatchHandler @ 08ab819f */
      std::vector<TutorialData::SkillData*,std::allocator<TutorialData::SkillData*>>::~vector
                (this_00);
    }
  }
  if (this != (TutorialData *)0xffffff6c) {
    this_01 = (map<int,TutorialData::SkillData*,std::less<int>,std::allocator<std::pair<int_const,TutorialData::SkillData*>>>
               *)(this + 0xf4);
    while (this_01 !=
           (map<int,TutorialData::SkillData*,std::less<int>,std::allocator<std::pair<int_const,TutorialData::SkillData*>>>
            *)(this + 0x94)) {
      this_01 = this_01 + -0x18;
                    /* try { // try from 08ab8202 to 08ab8206 has its CatchHandler @ 08ab8209 */
      std::
      map<int,TutorialData::SkillData*,std::less<int>,std::allocator<std::pair<int_const,TutorialData::SkillData*>>>
      ::~map(this_01);
    }
  }
  if (this != (TutorialData *)0xffffffcc) {
    this_02 = (map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x94);
    while (this_02 !=
           (map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x34)) {
      this_02 = this_02 + -0x18;
                    /* try { // try from 08ab8260 to 08ab8264 has its CatchHandler @ 08ab8267 */
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map(this_02);
    }
  }
                    /* try { // try from 08ab8288 to 08ab828c has its CatchHandler @ 08ab828f */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x1c));
  std::
  map<int,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>>>>
  ::~map((map<int,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>>>>
          *)(this + 4));
  return;
}
```
