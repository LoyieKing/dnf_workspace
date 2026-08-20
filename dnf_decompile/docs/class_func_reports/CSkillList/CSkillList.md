# CSkillList

`_ZN10CSkillListC1Ev`

`CSkillList::CSkillList()`

| 类 | 地址 |
|---|---|
| `CSkillList` | `0x08350842` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08350842  _ZN10CSkillListC1Ev
#           CSkillList::CSkillList()
# range [0x08350842, 0x083509e7]
08350842 +0x000:  push   %ebp
08350843 +0x001:  mov    %esp,%ebp
08350845 +0x003:  push   %edi
08350846 +0x004:  push   %esi
08350847 +0x005:  push   %ebx
08350848 +0x006:  sub    $0x2c,%esp
0835084b +0x009:  mov    0x8(%ebp),%ebx
0835084e +0x00c:  mov    %ebx,%edi
08350850 +0x00e:  mov    $0xa,%esi
08350855 +0x013:  jmp    08350865 <+0x23>
08350857 +0x015:  mov    %edi,(%esp)
0835085a +0x018:  call   0838f58a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f02a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f02a
0835085f +0x01d:  add    $0x14,%edi
08350862 +0x020:  sub    $0x1,%esi
08350865 +0x023:  cmp    $0xffffffff,%esi
08350868 +0x026:  setne  %al
0835086b +0x029:  test   %al,%al
0835086d +0x02b:  jne    08350857 <+0x15>
0835086f +0x02d:  jmp    083508ae <+0x6c>
08350871 +0x02f:  mov    %edx,%edi
08350873 +0x031:  mov    %eax,-0x24(%ebp)
08350876 +0x034:  test   %ebx,%ebx
08350878 +0x036:  je     083508a1 <+0x5f>
0835087a +0x038:  mov    $0xa,%eax
0835087f +0x03d:  sub    %esi,%eax
08350881 +0x03f:  mov    %eax,%edx
08350883 +0x041:  mov    %edx,%eax
08350885 +0x043:  shl    $0x2,%eax
08350888 +0x046:  add    %edx,%eax
0835088a +0x048:  shl    $0x2,%eax
0835088d +0x04b:  lea    (%ebx,%eax,1),%esi
08350890 +0x04e:  cmp    %ebx,%esi
08350892 +0x050:  je     083508a1 <+0x5f>
08350894 +0x052:  sub    $0x14,%esi
08350897 +0x055:  mov    %esi,(%esp)
0835089a +0x058:  call   08379fb0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x9a50>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x9a50
0835089f +0x05d:  jmp    08350890 <+0x4e>
083508a1 +0x05f:  mov    -0x24(%ebp),%eax
083508a4 +0x062:  mov    %edi,%edx
083508a6 +0x064:  mov    %eax,(%esp)
083508a9 +0x067:  call   08ae3750 <_Unwind_Resume>
083508ae +0x06c:  mov    0x8(%ebp),%eax
083508b1 +0x06f:  lea    0xdc(%eax),%esi
083508b7 +0x075:  mov    %esi,%edi
083508b9 +0x077:  mov    $0xa,%ebx
083508be +0x07c:  jmp    083508ce <+0x8c>
083508c0 +0x07e:  mov    %edi,(%esp)
083508c3 +0x081:  call   0838f65e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f0fe>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f0fe
083508c8 +0x086:  add    $0x18,%edi
083508cb +0x089:  sub    $0x1,%ebx
083508ce +0x08c:  cmp    $0xffffffff,%ebx
083508d1 +0x08f:  setne  %al
083508d4 +0x092:  test   %al,%al
083508d6 +0x094:  jne    083508c0 <+0x7e>
083508d8 +0x096:  jmp    08350913 <+0xd1>
083508da +0x098:  mov    %edx,%edi
083508dc +0x09a:  mov    %eax,-0x20(%ebp)
083508df +0x09d:  test   %esi,%esi
083508e1 +0x09f:  je     08350909 <+0xc7>
083508e3 +0x0a1:  mov    $0xa,%eax
083508e8 +0x0a6:  sub    %ebx,%eax
083508ea +0x0a8:  mov    %eax,%edx
083508ec +0x0aa:  mov    %edx,%eax
083508ee +0x0ac:  add    %eax,%eax
083508f0 +0x0ae:  add    %edx,%eax
083508f2 +0x0b0:  shl    $0x3,%eax
083508f5 +0x0b3:  lea    (%esi,%eax,1),%ebx
083508f8 +0x0b6:  cmp    %esi,%ebx
083508fa +0x0b8:  je     08350909 <+0xc7>
083508fc +0x0ba:  sub    $0x18,%ebx
083508ff +0x0bd:  mov    %ebx,(%esp)
08350902 +0x0c0:  call   08379fc4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x9a64>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x9a64
08350907 +0x0c5:  jmp    083508f8 <+0xb6>
08350909 +0x0c7:  mov    -0x20(%ebp),%eax
0835090c +0x0ca:  mov    %edi,%edx
0835090e +0x0cc:  jmp    083509b8 <+0x176>
08350913 +0x0d1:  mov    0x8(%ebp),%eax
08350916 +0x0d4:  lea    0x1e4(%eax),%esi
0835091c +0x0da:  mov    %esi,%edi
0835091e +0x0dc:  mov    $0xa,%ebx
08350923 +0x0e1:  jmp    08350933 <+0xf1>
08350925 +0x0e3:  mov    %edi,(%esp)
08350928 +0x0e6:  call   08383dec <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1388c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1388c
0835092d +0x0eb:  add    $0x18,%edi
08350930 +0x0ee:  sub    $0x1,%ebx
08350933 +0x0f1:  cmp    $0xffffffff,%ebx
08350936 +0x0f4:  setne  %al
08350939 +0x0f7:  test   %al,%al
0835093b +0x0f9:  jne    08350925 <+0xe3>
0835093d +0x0fb:  jmp    08350985 <+0x143>
0835093f +0x0fd:  mov    %edx,%edi
08350941 +0x0ff:  mov    %eax,-0x1c(%ebp)
08350944 +0x102:  test   %esi,%esi
08350946 +0x104:  je     0835096e <+0x12c>
08350948 +0x106:  mov    $0xa,%eax
0835094d +0x10b:  sub    %ebx,%eax
0835094f +0x10d:  mov    %eax,%edx
08350951 +0x10f:  mov    %edx,%eax
08350953 +0x111:  add    %eax,%eax
08350955 +0x113:  add    %edx,%eax
08350957 +0x115:  shl    $0x3,%eax
0835095a +0x118:  lea    (%esi,%eax,1),%ebx
0835095d +0x11b:  cmp    %esi,%ebx
0835095f +0x11d:  je     0835096e <+0x12c>
08350961 +0x11f:  sub    $0x18,%ebx
08350964 +0x122:  mov    %ebx,(%esp)
08350967 +0x125:  call   0836fa04 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x99d0>  ; global constructors keyed to CServerEvent::m_nExpRate+0x99d0
0835096c +0x12a:  jmp    0835095d <+0x11b>
0835096e +0x12c:  mov    -0x1c(%ebp),%eax
08350971 +0x12f:  mov    %edi,%edx
08350973 +0x131:  mov    %edx,%esi
08350975 +0x133:  mov    %eax,%edi
08350977 +0x135:  mov    0x8(%ebp),%eax
0835097a +0x138:  add    $0xdc,%eax
0835097f +0x13d:  test   %eax,%eax
08350981 +0x13f:  je     083509b4 <+0x172>
08350983 +0x141:  jmp    0835098d <+0x14b>
08350985 +0x143:  add    $0x2c,%esp
08350988 +0x146:  pop    %ebx
08350989 +0x147:  pop    %esi
0835098a +0x148:  pop    %edi
0835098b +0x149:  pop    %ebp
0835098c +0x14a:  ret
0835098d +0x14b:  mov    0x8(%ebp),%eax
08350990 +0x14e:  add    $0xdc,%eax
08350995 +0x153:  lea    0x108(%eax),%ebx
0835099b +0x159:  mov    0x8(%ebp),%eax
0835099e +0x15c:  add    $0xdc,%eax
083509a3 +0x161:  cmp    %eax,%ebx
083509a5 +0x163:  je     083509b4 <+0x172>
083509a7 +0x165:  sub    $0x18,%ebx
083509aa +0x168:  mov    %ebx,(%esp)
083509ad +0x16b:  call   08379fc4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x9a64>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x9a64
083509b2 +0x170:  jmp    0835099b <+0x159>
083509b4 +0x172:  mov    %edi,%eax
083509b6 +0x174:  mov    %esi,%edx
083509b8 +0x176:  mov    %edx,%esi
083509ba +0x178:  mov    %eax,%edi
083509bc +0x17a:  mov    0x8(%ebp),%eax
083509bf +0x17d:  test   %eax,%eax
083509c1 +0x17f:  je     083509e0 <+0x19e>
083509c3 +0x181:  mov    0x8(%ebp),%eax
083509c6 +0x184:  lea    0xdc(%eax),%ebx
083509cc +0x18a:  mov    0x8(%ebp),%eax
083509cf +0x18d:  cmp    %eax,%ebx
083509d1 +0x18f:  je     083509e0 <+0x19e>
083509d3 +0x191:  sub    $0x14,%ebx
083509d6 +0x194:  mov    %ebx,(%esp)
083509d9 +0x197:  call   08379fb0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x9a50>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x9a50
083509de +0x19c:  jmp    083509cc <+0x18a>
083509e0 +0x19e:  mov    %edi,%eax
083509e2 +0x1a0:  mov    %esi,%edx
083509e4 +0x1a2:  mov    %eax,(%esp)
083509e7 +0x1a5:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// CSkillList::CSkillList @ 0x8350842

/* CSkillList::CSkillList() */

void __thiscall CSkillList::CSkillList(CSkillList *this)

{
  int iVar1;
  CSkillList *this_00;
  multimap<int,CSkill*,std::less<int>,std::allocator<std::pair<int_const,CSkill*>>> *this_01;
  map<int,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>>
  *this_02;
  
  this_00 = this;
  for (iVar1 = 10; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 0835085a to 0835085e has its CatchHandler @ 08350871 */
    __gnu_cxx::hash_map<int,CSkill*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CSkill*>>
    ::hash_map((hash_map<int,CSkill*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CSkill*>>
                *)this_00);
    this_00 = this_00 + 0x14;
  }
  this_01 = (multimap<int,CSkill*,std::less<int>,std::allocator<std::pair<int_const,CSkill*>>> *)
            (this + 0xdc);
  for (iVar1 = 10; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 083508c3 to 083508c7 has its CatchHandler @ 083508da */
    std::multimap<int,CSkill*,std::less<int>,std::allocator<std::pair<int_const,CSkill*>>>::multimap
              (this_01);
    this_01 = this_01 + 0x18;
  }
  this_02 = (map<int,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>>
             *)(this + 0x1e4);
  for (iVar1 = 10; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 08350928 to 0835092c has its CatchHandler @ 0835093f */
    std::
    map<int,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>>
    ::map(this_02);
    this_02 = this_02 + 0x18;
  }
  return;
}
```
