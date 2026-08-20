# LoadGmDataFromDb

`_ZN11CGM_Manager16LoadGmDataFromDbEj`

`CGM_Manager::LoadGmDataFromDb(unsigned int)`

| 类 | 地址 |
|---|---|
| `CGM_Manager` | `0x08299740` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08299740  _ZN11CGM_Manager16LoadGmDataFromDbEj
#           CGM_Manager::LoadGmDataFromDb(unsigned int)
# range [0x08299740, 0x08299911]
08299740 +0x000:  push   %ebp
08299741 +0x001:  mov    %esp,%ebp
08299743 +0x003:  push   %esi
08299744 +0x004:  push   %ebx
08299745 +0x005:  sub    $0x40,%esp
08299748 +0x008:  movb   $0x0,-0xd(%ebp)
0829974c +0x00c:  movl   $0x0,-0xc(%ebp)
08299753 +0x013:  mov    0xc(%ebp),%eax
08299756 +0x016:  movl   $0x0,0x4(%esp)
0829975e +0x01e:  mov    %eax,(%esp)
08299761 +0x021:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08299766 +0x026:  mov    0x8(%ebp),%edx
08299769 +0x029:  mov    0x18(%edx),%edx
0829976c +0x02c:  mov    %eax,0x8(%esp)
08299770 +0x030:  movl   $"seLect level from gm_manifest where m_id = %s",0x4(%esp)
08299778 +0x038:  mov    %edx,(%esp)
0829977b +0x03b:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08299780 +0x040:  mov    0x8(%ebp),%eax
08299783 +0x043:  mov    0x18(%eax),%eax
08299786 +0x046:  movl   $0x1,0x4(%esp)
0829978e +0x04e:  mov    %eax,(%esp)
08299791 +0x051:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08299796 +0x056:  mov    %al,-0xd(%ebp)
08299799 +0x059:  movzbl -0xd(%ebp),%eax
0829979d +0x05d:  xor    $0x1,%eax
082997a0 +0x060:  test   %al,%al
082997a2 +0x062:  je     082997e4 <+0xa4>
082997a4 +0x064:  movl   $0x0,0xc(%esp)
082997ac +0x06c:  movl   $0x15a2,0x8(%esp)
082997b4 +0x074:  movl   $&_ZZN11CGM_Manager16LoadGmDataFromDbEjE19__PRETTY_FUNCTION__,0x4(%esp)
082997bc +0x07c:  lea    -0x30(%ebp),%eax
082997bf +0x07f:  mov    %eax,(%esp)
082997c2 +0x082:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082997c7 +0x087:  movl   $"Failed to get GM list from DB.",0x4(%esp)
082997cf +0x08f:  lea    -0x30(%ebp),%eax
082997d2 +0x092:  mov    %eax,(%esp)
082997d5 +0x095:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082997da +0x09a:  mov    $0x0,%ebx
082997df +0x09f:  jmp    08299908 <+0x1c8>
082997e4 +0x0a4:  mov    0x8(%ebp),%eax
082997e7 +0x0a7:  mov    0x18(%eax),%eax
082997ea +0x0aa:  mov    %eax,(%esp)
082997ed +0x0ad:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
082997f2 +0x0b2:  mov    %eax,-0xc(%ebp)
082997f5 +0x0b5:  cmpl   $0x0,-0xc(%ebp)
082997f9 +0x0b9:  jne    08299805 <+0xc5>
082997fb +0x0bb:  mov    $0x0,%ebx
08299800 +0x0c0:  jmp    08299908 <+0x1c8>
08299805 +0x0c5:  mov    0x8(%ebp),%eax
08299808 +0x0c8:  add    $0x1c,%eax
0829980b +0x0cb:  mov    %eax,0x4(%esp)
0829980f +0x0cf:  lea    -0x34(%ebp),%eax
08299812 +0x0d2:  mov    %eax,(%esp)
08299815 +0x0d5:  call   082b2f36 <_GLOBAL__I__ZN4CLog5this_E+0xf35d>  ; global constructors keyed to CLog::this_+0xf35d
0829981a +0x0da:  mov    0x8(%ebp),%eax
0829981d +0x0dd:  mov    0x18(%eax),%eax
08299820 +0x0e0:  mov    %eax,(%esp)
08299823 +0x0e3:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08299828 +0x0e8:  mov    0x8(%ebp),%eax
0829982b +0x0eb:  lea    0xc(%ebp),%edx
0829982e +0x0ee:  mov    %edx,0x4(%esp)
08299832 +0x0f2:  mov    %eax,(%esp)
08299835 +0x0f5:  call   082b2dea <_GLOBAL__I__ZN4CLog5this_E+0xf211>  ; global constructors keyed to CLog::this_+0xf211
0829983a +0x0fa:  lea    0x4(%eax),%edx
0829983d +0x0fd:  mov    0x8(%ebp),%eax
08299840 +0x100:  mov    0x18(%eax),%eax
08299843 +0x103:  mov    %edx,0x8(%esp)
08299847 +0x107:  movl   $0x0,0x4(%esp)
0829984f +0x10f:  mov    %eax,(%esp)
08299852 +0x112:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08299857 +0x117:  mov    %al,-0xd(%ebp)
0829985a +0x11a:  mov    0x8(%ebp),%eax
0829985d +0x11d:  lea    0xc(%ebp),%edx
08299860 +0x120:  mov    %edx,0x4(%esp)
08299864 +0x124:  mov    %eax,(%esp)
08299867 +0x127:  call   082b2dea <_GLOBAL__I__ZN4CLog5this_E+0xf211>  ; global constructors keyed to CLog::this_+0xf211
0829986c +0x12c:  mov    0x4(%eax),%eax
0829986f +0x12f:  test   %eax,%eax
08299871 +0x131:  sete   %al
08299874 +0x134:  test   %al,%al
08299876 +0x136:  je     082998d3 <+0x193>
08299878 +0x138:  mov    0xc(%ebp),%eax
0829987b +0x13b:  movl   $0x0,0x4(%esp)
08299883 +0x143:  mov    %eax,(%esp)
08299886 +0x146:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0829988b +0x14b:  mov    %eax,%ebx
0829988d +0x14d:  movl   $0x0,0xc(%esp)
08299895 +0x155:  movl   $0x15b4,0x8(%esp)
0829989d +0x15d:  movl   $&_ZZN11CGM_Manager16LoadGmDataFromDbEjE19__PRETTY_FUNCTION__,0x4(%esp)
082998a5 +0x165:  lea    -0x20(%ebp),%eax
082998a8 +0x168:  mov    %eax,(%esp)
082998ab +0x16b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082998b0 +0x170:  mov    %ebx,0x8(%esp)
082998b4 +0x174:  movl   $"GM: %s exists in GM manifest but doen't have proper level. check DB",0x4(%esp)
082998bc +0x17c:  lea    -0x20(%ebp),%eax
082998bf +0x17f:  mov    %eax,(%esp)
082998c2 +0x182:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082998c7 +0x187:  mov    $0x0,%ebx
082998cc +0x18c:  mov    $0x0,%esi
082998d1 +0x191:  jmp    082998f5 <+0x1b5>
082998d3 +0x193:  mov    $0x1,%esi
082998d8 +0x198:  jmp    082998f5 <+0x1b5>
082998da +0x19a:  mov    %edx,%ebx
082998dc +0x19c:  mov    %eax,%esi
082998de +0x19e:  lea    -0x34(%ebp),%eax
082998e1 +0x1a1:  mov    %eax,(%esp)
082998e4 +0x1a4:  call   082b2f52 <_GLOBAL__I__ZN4CLog5this_E+0xf379>  ; global constructors keyed to CLog::this_+0xf379
082998e9 +0x1a9:  mov    %esi,%eax
082998eb +0x1ab:  mov    %ebx,%edx
082998ed +0x1ad:  mov    %eax,(%esp)
082998f0 +0x1b0:  call   08ae3750 <_Unwind_Resume>
082998f5 +0x1b5:  lea    -0x34(%ebp),%eax
082998f8 +0x1b8:  mov    %eax,(%esp)
082998fb +0x1bb:  call   082b2f52 <_GLOBAL__I__ZN4CLog5this_E+0xf379>  ; global constructors keyed to CLog::this_+0xf379
08299900 +0x1c0:  test   %esi,%esi
08299902 +0x1c2:  je     08299908 <+0x1c8>
08299904 +0x1c4:  movzbl -0xd(%ebp),%ebx
08299908 +0x1c8:  mov    %ebx,%eax
0829990a +0x1ca:  add    $0x40,%esp
0829990d +0x1cd:  pop    %ebx
0829990e +0x1ce:  pop    %esi
0829990f +0x1cf:  pop    %ebp
08299910 +0x1d0:  ret
08299911 +0x1d1:  nop
```

## 反编译 C

```c
// CGM_Manager::LoadGmDataFromDb @ 0x8299740

/* CGM_Manager::LoadGmDataFromDb(unsigned int) */

uint __thiscall CGM_Manager::LoadGmDataFromDb(CGM_Manager *this,uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint unaff_EBX;
  bool bVar3;
  writeGuard<rwLock> local_38 [4];
  cMyTrace local_34 [16];
  cMyTrace local_24 [19];
  byte local_11;
  int local_10;
  
  local_11 = 0;
  local_10 = 0;
  uVar1 = NumberToString(param_1,0);
  MySQL::set_query(*(MySQL **)(this + 0x18),"seLect level from gm_manifest where m_id = %s",uVar1);
  local_11 = MySQL::exec(*(MySQL **)(this + 0x18),true);
  if (local_11 == '\x01') {
    local_10 = MySQL::get_n_rows(*(MySQL **)(this + 0x18));
    if (local_10 == 0) {
      unaff_EBX = 0;
    }
    else {
      writeGuard<rwLock>::writeGuard(local_38,(rwLock *)(this + 0x1c));
                    /* try { // try from 08299823 to 082998c6 has its CatchHandler @ 082998da */
      MySQL::fetch(*(MySQL **)(this + 0x18));
      iVar2 = std::
              map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
              ::operator[]((map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
                            *)this,&param_1);
      local_11 = MySQL::get_int(*(MySQL **)(this + 0x18),0,(int *)(iVar2 + 4));
      iVar2 = std::
              map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
              ::operator[]((map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
                            *)this,&param_1);
      bVar3 = *(int *)(iVar2 + 4) != 0;
      if (!bVar3) {
        uVar1 = NumberToString(param_1,0);
        cMyTrace::cMyTrace(local_24,
                           "bool CGM_Manager::LoadGmDataFromDb(memberIdentificationNumber_t)",0x15b4
                           ,0);
        cMyTrace::operator()
                  (local_24,"GM: %s exists in GM manifest but doen\'t have proper level. check DB",
                   uVar1);
        unaff_EBX = 0;
      }
      writeGuard<rwLock>::~writeGuard(local_38);
      if (bVar3) {
        unaff_EBX = (uint)local_11;
      }
    }
  }
  else {
    cMyTrace::cMyTrace(local_34,"bool CGM_Manager::LoadGmDataFromDb(memberIdentificationNumber_t)",
                       0x15a2,0);
    cMyTrace::operator()(local_34,"Failed to get GM list from DB.");
    unaff_EBX = 0;
  }
  return unaff_EBX;
}
```
