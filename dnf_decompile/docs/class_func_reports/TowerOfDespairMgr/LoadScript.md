# LoadScript

`_ZN17TowerOfDespairMgr10LoadScriptEPKcS1_`

`TowerOfDespairMgr::LoadScript(char const*, char const*)`

| 类 | 地址 |
|---|---|
| `TowerOfDespairMgr` | `0x08643e7e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08643e7e  _ZN17TowerOfDespairMgr10LoadScriptEPKcS1_
#           TowerOfDespairMgr::LoadScript(char const*, char const*)
# range [0x08643e7e, 0x0864409f]
08643e7e +0x000:  push   %ebp
08643e7f +0x001:  mov    %esp,%ebp
08643e81 +0x003:  push   %esi
08643e82 +0x004:  push   %ebx
08643e83 +0x005:  sub    $0x30,%esp
08643e86 +0x008:  mov    0x10(%ebp),%eax
08643e89 +0x00b:  mov    %eax,0x4(%esp)
08643e8d +0x00f:  mov    0xc(%ebp),%eax
08643e90 +0x012:  mov    %eax,(%esp)
08643e93 +0x015:  call   088bbd29 <_Z18loadRDARScriptFilePKcS0_>  ; loadRDARScriptFile(char const*, char const*)
08643e98 +0x01a:  xor    $0x1,%eax
08643e9b +0x01d:  test   %al,%al
08643e9d +0x01f:  je     08643ea9 <+0x2b>
08643e9f +0x021:  mov    $0x65,%ebx
08643ea4 +0x026:  jmp    08644093 <+0x215>
08643ea9 +0x02b:  lea    -0x20(%ebp),%eax
08643eac +0x02e:  mov    %eax,(%esp)
08643eaf +0x031:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08643eb4 +0x036:  movb   $0x0,-0x21(%ebp)
08643eb8 +0x03a:  jmp    08643ebb <+0x3d>
08643eba +0x03c:  nop
08643ebb +0x03d:  movl   $0x1,0x4(%esp)
08643ec3 +0x045:  lea    -0x20(%ebp),%eax
08643ec6 +0x048:  mov    %eax,(%esp)
08643ec9 +0x04b:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
08643ece +0x050:  xor    $0x1,%eax
08643ed1 +0x053:  test   %al,%al
08643ed3 +0x055:  jne    08644065 <+0x1e7>
08643ed9 +0x05b:  movl   $"[enterable count]",0x4(%esp)
08643ee1 +0x063:  lea    -0x20(%ebp),%eax
08643ee4 +0x066:  mov    %eax,(%esp)
08643ee7 +0x069:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08643eec +0x06e:  test   %al,%al
08643eee +0x070:  je     08643f0a <+0x8c>
08643ef0 +0x072:  movl   $0x0,(%esp)
08643ef7 +0x079:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08643efc +0x07e:  mov    %eax,%edx
08643efe +0x080:  mov    0x8(%ebp),%eax
08643f01 +0x083:  mov    %dx,0x34c(%eax)
08643f08 +0x08a:  jmp    08643ebb <+0x3d>
08643f0a +0x08c:  movl   $"[min Level]",0x4(%esp)
08643f12 +0x094:  lea    -0x20(%ebp),%eax
08643f15 +0x097:  mov    %eax,(%esp)
08643f18 +0x09a:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08643f1d +0x09f:  test   %al,%al
08643f1f +0x0a1:  je     08643f3b <+0xbd>
08643f21 +0x0a3:  movl   $0x0,(%esp)
08643f28 +0x0aa:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08643f2d +0x0af:  mov    %eax,%edx
08643f2f +0x0b1:  mov    0x8(%ebp),%eax
08643f32 +0x0b4:  mov    %dx,0x34e(%eax)
08643f39 +0x0bb:  jmp    08643ebb <+0x3d>
08643f3b +0x0bd:  movl   $"[top layer]",0x4(%esp)
08643f43 +0x0c5:  lea    -0x20(%ebp),%eax
08643f46 +0x0c8:  mov    %eax,(%esp)
08643f49 +0x0cb:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08643f4e +0x0d0:  test   %al,%al
08643f50 +0x0d2:  je     08643f6f <+0xf1>
08643f52 +0x0d4:  movl   $0x0,(%esp)
08643f59 +0x0db:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08643f5e +0x0e0:  mov    %eax,%edx
08643f60 +0x0e2:  mov    0x8(%ebp),%eax
08643f63 +0x0e5:  mov    %dx,0x350(%eax)
08643f6a +0x0ec:  jmp    08643ebb <+0x3d>
08643f6f +0x0f1:  movl   $"[each layer matching dungeon]",0x4(%esp)
08643f77 +0x0f9:  lea    -0x20(%ebp),%eax
08643f7a +0x0fc:  mov    %eax,(%esp)
08643f7d +0x0ff:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08643f82 +0x104:  test   %al,%al
08643f84 +0x106:  je     08643fcf <+0x151>
08643f86 +0x108:  lea    -0x21(%ebp),%eax
08643f89 +0x10b:  mov    %eax,(%esp)
08643f8c +0x10e:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08643f91 +0x113:  mov    %eax,-0x14(%ebp)
08643f94 +0x116:  movzbl -0x21(%ebp),%eax
08643f98 +0x11a:  xor    $0x1,%eax
08643f9b +0x11d:  test   %al,%al
08643f9d +0x11f:  je     08643fa5 <+0x127>
08643f9f +0x121:  nop
08643fa0 +0x122:  jmp    08643ebb <+0x3d>
08643fa5 +0x127:  movl   $0x0,(%esp)
08643fac +0x12e:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08643fb1 +0x133:  mov    %eax,-0x10(%ebp)
08643fb4 +0x136:  mov    -0x10(%ebp),%edx
08643fb7 +0x139:  mov    -0x14(%ebp),%eax
08643fba +0x13c:  mov    %edx,0x8(%esp)
08643fbe +0x140:  mov    %eax,0x4(%esp)
08643fc2 +0x144:  mov    0x8(%ebp),%eax
08643fc5 +0x147:  mov    %eax,(%esp)
08643fc8 +0x14a:  call   08643c86 <_ZN17TowerOfDespairMgr24_Set_LayerByDungeonIndexEjj>  ; TowerOfDespairMgr::_Set_LayerByDungeonIndex(unsigned int, unsigned int)
08643fcd +0x14f:  jmp    08643f86 <+0x108>
08643fcf +0x151:  movl   $"[npc layer]",0x4(%esp)
08643fd7 +0x159:  lea    -0x20(%ebp),%eax
08643fda +0x15c:  mov    %eax,(%esp)
08643fdd +0x15f:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08643fe2 +0x164:  test   %al,%al
08643fe4 +0x166:  je     08643eba <+0x3c>
08643fea +0x16c:  lea    -0x21(%ebp),%eax
08643fed +0x16f:  mov    %eax,(%esp)
08643ff0 +0x172:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08643ff5 +0x177:  mov    %eax,-0xc(%ebp)
08643ff8 +0x17a:  movzbl -0x21(%ebp),%eax
08643ffc +0x17e:  xor    $0x1,%eax
08643fff +0x181:  test   %al,%al
08644001 +0x183:  jne    08644017 <+0x199>
08644003 +0x185:  mov    -0xc(%ebp),%eax
08644006 +0x188:  mov    %eax,0x4(%esp)
0864400a +0x18c:  mov    0x8(%ebp),%eax
0864400d +0x18f:  mov    %eax,(%esp)
08644010 +0x192:  call   08643cf4 <_ZN17TowerOfDespairMgr20_Set_APCIndexByLayerEj>  ; TowerOfDespairMgr::_Set_APCIndexByLayer(unsigned int)
08644015 +0x197:  jmp    08643fea <+0x16c>
08644017 +0x199:  nop
08644018 +0x19a:  mov    0x8(%ebp),%eax
0864401b +0x19d:  lea    0x340(%eax),%edx
08644021 +0x1a3:  lea    -0x1c(%ebp),%eax
08644024 +0x1a6:  mov    %edx,0x4(%esp)
08644028 +0x1aa:  mov    %eax,(%esp)
0864402b +0x1ad:  call   080e2a8a <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x830>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x830
08644030 +0x1b2:  sub    $0x4,%esp
08644033 +0x1b5:  mov    0x8(%ebp),%eax
08644036 +0x1b8:  lea    0x340(%eax),%edx
0864403c +0x1be:  lea    -0x18(%ebp),%eax
0864403f +0x1c1:  mov    %edx,0x4(%esp)
08644043 +0x1c5:  mov    %eax,(%esp)
08644046 +0x1c8:  call   080e384e <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x15f4>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x15f4
0864404b +0x1cd:  sub    $0x4,%esp
0864404e +0x1d0:  mov    -0x1c(%ebp),%eax
08644051 +0x1d3:  mov    %eax,0x4(%esp)
08644055 +0x1d7:  mov    -0x18(%ebp),%eax
08644058 +0x1da:  mov    %eax,(%esp)
0864405b +0x1dd:  call   086445f7 <_GLOBAL__I__ZN17TowerOfDespairMgrC2Ev+0x142>  ; global constructors keyed to TowerOfDespairMgr::TowerOfDespairMgr()+0x142
08644060 +0x1e2:  jmp    08643ebb <+0x3d>
08644065 +0x1e7:  nop
08644066 +0x1e8:  mov    $0x0,%ebx
0864406b +0x1ed:  lea    -0x20(%ebp),%eax
0864406e +0x1f0:  mov    %eax,(%esp)
08644071 +0x1f3:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08644076 +0x1f8:  jmp    08644093 <+0x215>
08644078 +0x1fa:  mov    %edx,%ebx
0864407a +0x1fc:  mov    %eax,%esi
0864407c +0x1fe:  lea    -0x20(%ebp),%eax
0864407f +0x201:  mov    %eax,(%esp)
08644082 +0x204:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08644087 +0x209:  mov    %esi,%eax
08644089 +0x20b:  mov    %ebx,%edx
0864408b +0x20d:  mov    %eax,(%esp)
0864408e +0x210:  call   08ae3750 <_Unwind_Resume>
08644093 +0x215:  mov    %ebx,%eax
08644095 +0x217:  lea    -0x8(%ebp),%esp
08644098 +0x21a:  add    $0x0,%esp
0864409b +0x21d:  pop    %ebx
0864409c +0x21e:  pop    %esi
0864409d +0x21f:  pop    %ebp
0864409e +0x220:  ret
0864409f +0x221:  nop
```

## 反编译 C

```c
// TowerOfDespairMgr::LoadScript @ 0x8643e7e

/* TowerOfDespairMgr::LoadScript(char const*, char const*) */

undefined4 __thiscall
TowerOfDespairMgr::LoadScript(TowerOfDespairMgr *this,char *param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  bool local_25;
  string local_24;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  undefined4 local_10;
  
  cVar1 = loadRDARScriptFile(param_1,param_2);
  if (cVar1 == '\x01') {
    std::string::string((string *)&local_24);
    local_25 = false;
                    /* try { // try from 08643ec9 to 0864405f has its CatchHandler @ 08644078 */
    while (cVar1 = ScanType((string *)&local_24,true), cVar1 == '\x01') {
      bVar2 = std::operator==(&local_24,"[enterable count]");
      if (bVar2) {
        uVar3 = ScanInt((bool *)0x0);
        *(undefined2 *)(this + 0x34c) = uVar3;
      }
      else {
        bVar2 = std::operator==(&local_24,"[min Level]");
        if (bVar2) {
          uVar3 = ScanInt((bool *)0x0);
          *(undefined2 *)(this + 0x34e) = uVar3;
        }
        else {
          bVar2 = std::operator==(&local_24,"[top layer]");
          if (bVar2) {
            uVar3 = ScanInt((bool *)0x0);
            *(undefined2 *)(this + 0x350) = uVar3;
          }
          else {
            bVar2 = std::operator==(&local_24,"[each layer matching dungeon]");
            if (bVar2) {
              while (local_18 = ScanInt(&local_25), local_25 == true) {
                local_14 = ScanInt((bool *)0x0);
                _Set_LayerByDungeonIndex(this,local_18,local_14);
              }
            }
            else {
              bVar2 = std::operator==(&local_24,"[npc layer]");
              if (bVar2) {
                while (local_10 = ScanInt(&local_25), local_25 == true) {
                  _Set_APCIndexByLayer((uint)this);
                }
                std::vector<unsigned_int,std::allocator<unsigned_int>>::end();
                std::vector<unsigned_int,std::allocator<unsigned_int>>::begin();
                std::
                sort<__gnu_cxx::__normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>>
                          (local_1c,local_20);
              }
            }
          }
        }
      }
    }
    uVar4 = 0;
    std::string::~string((string *)&local_24);
  }
  else {
    uVar4 = 0x65;
  }
  return uVar4;
}
```
