# loadScript

`_ZN20GlobalScriptTutorial10loadScriptEPKcS1_`

`GlobalScriptTutorial::loadScript(char const*, char const*)`

| 类 | 地址 |
|---|---|
| `GlobalScriptTutorial` | `0x08ab8ffe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ab8ffe  _ZN20GlobalScriptTutorial10loadScriptEPKcS1_
#           GlobalScriptTutorial::loadScript(char const*, char const*)
# range [0x08ab8ffe, 0x08ab9225]
08ab8ffe +0x000:  push   %ebp
08ab8fff +0x001:  mov    %esp,%ebp
08ab9001 +0x003:  push   %esi
08ab9002 +0x004:  push   %ebx
08ab9003 +0x005:  sub    $0x20,%esp
08ab9006 +0x008:  mov    0x10(%ebp),%eax
08ab9009 +0x00b:  mov    %eax,0x4(%esp)
08ab900d +0x00f:  mov    0xc(%ebp),%eax
08ab9010 +0x012:  mov    %eax,(%esp)
08ab9013 +0x015:  call   088bbd29 <_Z18loadRDARScriptFilePKcS0_>  ; loadRDARScriptFile(char const*, char const*)
08ab9018 +0x01a:  xor    $0x1,%eax
08ab901b +0x01d:  test   %al,%al
08ab901d +0x01f:  je     08ab9029 <+0x2b>
08ab901f +0x021:  mov    $0x0,%eax
08ab9024 +0x026:  jmp    08ab921e <+0x220>
08ab9029 +0x02b:  movl   $0xb,-0xc(%ebp)
08ab9030 +0x032:  jmp    08ab9033 <+0x35>
08ab9032 +0x034:  nop
08ab9033 +0x035:  lea    -0x10(%ebp),%eax
08ab9036 +0x038:  mov    %eax,(%esp)
08ab9039 +0x03b:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08ab903e +0x040:  movl   $0x1,0x4(%esp)
08ab9046 +0x048:  lea    -0x10(%ebp),%eax
08ab9049 +0x04b:  mov    %eax,(%esp)
08ab904c +0x04e:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
08ab9051 +0x053:  xor    $0x1,%eax
08ab9054 +0x056:  test   %al,%al
08ab9056 +0x058:  je     08ab9062 <+0x64>
08ab9058 +0x05a:  mov    $0x0,%ebx
08ab905d +0x05f:  jmp    08ab9201 <+0x203>
08ab9062 +0x064:  movl   $"[dialog]",0x4(%esp)
08ab906a +0x06c:  lea    -0x10(%ebp),%eax
08ab906d +0x06f:  mov    %eax,(%esp)
08ab9070 +0x072:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08ab9075 +0x077:  test   %al,%al
08ab9077 +0x079:  je     08ab9090 <+0x92>
08ab9079 +0x07b:  lea    -0xc(%ebp),%eax
08ab907c +0x07e:  mov    %eax,0x4(%esp)
08ab9080 +0x082:  mov    0x8(%ebp),%eax
08ab9083 +0x085:  mov    %eax,(%esp)
08ab9086 +0x088:  call   08ab9226 <_ZN20GlobalScriptTutorial13LoadDialogTagER17ENUM_CHARACTERJOB>  ; GlobalScriptTutorial::LoadDialogTag(ENUM_CHARACTERJOB&)
08ab908b +0x08d:  jmp    08ab91df <+0x1e1>
08ab9090 +0x092:  movl   $"[avatar]",0x4(%esp)
08ab9098 +0x09a:  lea    -0x10(%ebp),%eax
08ab909b +0x09d:  mov    %eax,(%esp)
08ab909e +0x0a0:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08ab90a3 +0x0a5:  test   %al,%al
08ab90a5 +0x0a7:  je     08ab90be <+0xc0>
08ab90a7 +0x0a9:  lea    -0xc(%ebp),%eax
08ab90aa +0x0ac:  mov    %eax,0x4(%esp)
08ab90ae +0x0b0:  mov    0x8(%ebp),%eax
08ab90b1 +0x0b3:  mov    %eax,(%esp)
08ab90b4 +0x0b6:  call   08ab930a <_ZN20GlobalScriptTutorial13LoadAvatarTagER17ENUM_CHARACTERJOB>  ; GlobalScriptTutorial::LoadAvatarTag(ENUM_CHARACTERJOB&)
08ab90b9 +0x0bb:  jmp    08ab91df <+0x1e1>
08ab90be +0x0c0:  movl   $"[equipment]",0x4(%esp)
08ab90c6 +0x0c8:  lea    -0x10(%ebp),%eax
08ab90c9 +0x0cb:  mov    %eax,(%esp)
08ab90cc +0x0ce:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08ab90d1 +0x0d3:  test   %al,%al
08ab90d3 +0x0d5:  je     08ab90ec <+0xee>
08ab90d5 +0x0d7:  lea    -0xc(%ebp),%eax
08ab90d8 +0x0da:  mov    %eax,0x4(%esp)
08ab90dc +0x0de:  mov    0x8(%ebp),%eax
08ab90df +0x0e1:  mov    %eax,(%esp)
08ab90e2 +0x0e4:  call   08ab937a <_ZN20GlobalScriptTutorial16LoadEquipmentTagER17ENUM_CHARACTERJOB>  ; GlobalScriptTutorial::LoadEquipmentTag(ENUM_CHARACTERJOB&)
08ab90e7 +0x0e9:  jmp    08ab91df <+0x1e1>
08ab90ec +0x0ee:  movl   $"[dungeonindex]",0x4(%esp)
08ab90f4 +0x0f6:  lea    -0x10(%ebp),%eax
08ab90f7 +0x0f9:  mov    %eax,(%esp)
08ab90fa +0x0fc:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08ab90ff +0x101:  test   %al,%al
08ab9101 +0x103:  je     08ab911a <+0x11c>
08ab9103 +0x105:  lea    -0xc(%ebp),%eax
08ab9106 +0x108:  mov    %eax,0x4(%esp)
08ab910a +0x10c:  mov    0x8(%ebp),%eax
08ab910d +0x10f:  mov    %eax,(%esp)
08ab9110 +0x112:  call   08ab9562 <_ZN20GlobalScriptTutorial16LoadDungeonIndexER17ENUM_CHARACTERJOB>  ; GlobalScriptTutorial::LoadDungeonIndex(ENUM_CHARACTERJOB&)
08ab9115 +0x117:  jmp    08ab91df <+0x1e1>
08ab911a +0x11c:  movl   $"[skill]",0x4(%esp)
08ab9122 +0x124:  lea    -0x10(%ebp),%eax
08ab9125 +0x127:  mov    %eax,(%esp)
08ab9128 +0x12a:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08ab912d +0x12f:  test   %al,%al
08ab912f +0x131:  je     08ab9148 <+0x14a>
08ab9131 +0x133:  lea    -0xc(%ebp),%eax
08ab9134 +0x136:  mov    %eax,0x4(%esp)
08ab9138 +0x13a:  mov    0x8(%ebp),%eax
08ab913b +0x13d:  mov    %eax,(%esp)
08ab913e +0x140:  call   08ab9408 <_ZN20GlobalScriptTutorial12LoadSkillTagER17ENUM_CHARACTERJOB>  ; GlobalScriptTutorial::LoadSkillTag(ENUM_CHARACTERJOB&)
08ab9143 +0x145:  jmp    08ab91df <+0x1e1>
08ab9148 +0x14a:  movl   $"[passive skill]",0x4(%esp)
08ab9150 +0x152:  lea    -0x10(%ebp),%eax
08ab9153 +0x155:  mov    %eax,(%esp)
08ab9156 +0x158:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08ab915b +0x15d:  test   %al,%al
08ab915d +0x15f:  je     08ab9173 <+0x175>
08ab915f +0x161:  lea    -0xc(%ebp),%eax
08ab9162 +0x164:  mov    %eax,0x4(%esp)
08ab9166 +0x168:  mov    0x8(%ebp),%eax
08ab9169 +0x16b:  mov    %eax,(%esp)
08ab916c +0x16e:  call   08ab94d4 <_ZN20GlobalScriptTutorial19LoadPassiveSkilltagER17ENUM_CHARACTERJOB>  ; GlobalScriptTutorial::LoadPassiveSkilltag(ENUM_CHARACTERJOB&)
08ab9171 +0x173:  jmp    08ab91df <+0x1e1>
08ab9173 +0x175:  movl   $"[tutorial notice]",0x4(%esp)
08ab917b +0x17d:  lea    -0x10(%ebp),%eax
08ab917e +0x180:  mov    %eax,(%esp)
08ab9181 +0x183:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08ab9186 +0x188:  test   %al,%al
08ab9188 +0x18a:  je     08ab919e <+0x1a0>
08ab918a +0x18c:  lea    -0xc(%ebp),%eax
08ab918d +0x18f:  mov    %eax,0x4(%esp)
08ab9191 +0x193:  mov    0x8(%ebp),%eax
08ab9194 +0x196:  mov    %eax,(%esp)
08ab9197 +0x199:  call   08ab95ac <_ZN20GlobalScriptTutorial18LoadTutorialNoticeER17ENUM_CHARACTERJOB>  ; GlobalScriptTutorial::LoadTutorialNotice(ENUM_CHARACTERJOB&)
08ab919c +0x19e:  jmp    08ab91df <+0x1e1>
08ab919e +0x1a0:  movl   $"[item]",0x4(%esp)
08ab91a6 +0x1a8:  lea    -0x10(%ebp),%eax
08ab91a9 +0x1ab:  mov    %eax,(%esp)
08ab91ac +0x1ae:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08ab91b1 +0x1b3:  test   %al,%al
08ab91b3 +0x1b5:  je     08ab91c9 <+0x1cb>
08ab91b5 +0x1b7:  lea    -0xc(%ebp),%eax
08ab91b8 +0x1ba:  mov    %eax,0x4(%esp)
08ab91bc +0x1be:  mov    0x8(%ebp),%eax
08ab91bf +0x1c1:  mov    %eax,(%esp)
08ab91c2 +0x1c4:  call   08ab96a8 <_ZN20GlobalScriptTutorial8LoadItemER17ENUM_CHARACTERJOB>  ; GlobalScriptTutorial::LoadItem(ENUM_CHARACTERJOB&)
08ab91c7 +0x1c9:  jmp    08ab91df <+0x1e1>
08ab91c9 +0x1cb:  lea    -0x10(%ebp),%eax
08ab91cc +0x1ce:  mov    %eax,(%esp)
08ab91cf +0x1d1:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08ab91d4 +0x1d6:  mov    %eax,(%esp)
08ab91d7 +0x1d9:  call   088be57e <_Z15getCharacterJobPKc>  ; getCharacterJob(char const*)
08ab91dc +0x1de:  mov    %eax,-0xc(%ebp)
08ab91df +0x1e1:  mov    $0x1,%ebx
08ab91e4 +0x1e6:  jmp    08ab9201 <+0x203>
08ab91e6 +0x1e8:  mov    %edx,%ebx
08ab91e8 +0x1ea:  mov    %eax,%esi
08ab91ea +0x1ec:  lea    -0x10(%ebp),%eax
08ab91ed +0x1ef:  mov    %eax,(%esp)
08ab91f0 +0x1f2:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08ab91f5 +0x1f7:  mov    %esi,%eax
08ab91f7 +0x1f9:  mov    %ebx,%edx
08ab91f9 +0x1fb:  mov    %eax,(%esp)
08ab91fc +0x1fe:  call   08ae3750 <_Unwind_Resume>
08ab9201 +0x203:  lea    -0x10(%ebp),%eax
08ab9204 +0x206:  mov    %eax,(%esp)
08ab9207 +0x209:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08ab920c +0x20e:  test   %ebx,%ebx
08ab920e +0x210:  jne    08ab9032 <+0x34>
08ab9214 +0x216:  call   088bc054 <_Z20unloadRDARScriptFilev>  ; unloadRDARScriptFile()
08ab9219 +0x21b:  mov    $0x1,%eax
08ab921e +0x220:  add    $0x20,%esp
08ab9221 +0x223:  pop    %ebx
08ab9222 +0x224:  pop    %esi
08ab9223 +0x225:  pop    %ebp
08ab9224 +0x226:  ret
08ab9225 +0x227:  nop
```

## 反编译 C

```c
// GlobalScriptTutorial::loadScript @ 0x8ab8ffe

/* GlobalScriptTutorial::loadScript(char const*, char const*) */

undefined4 __thiscall
GlobalScriptTutorial::loadScript(GlobalScriptTutorial *this,char *param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  char *pcVar4;
  string local_14;
  undefined4 local_10;
  
  cVar1 = loadRDARScriptFile(param_1,param_2);
  if (cVar1 == '\x01') {
    local_10 = 0xb;
    do {
      std::string::string((string *)&local_14);
                    /* try { // try from 08ab904c to 08ab91db has its CatchHandler @ 08ab91e6 */
      cVar1 = ScanType((string *)&local_14,true);
      if (cVar1 == '\x01') {
        bVar2 = std::operator==(&local_14,"[dialog]");
        if (bVar2) {
          LoadDialogTag(this,(ENUM_CHARACTERJOB *)&local_10);
        }
        else {
          bVar2 = std::operator==(&local_14,"[avatar]");
          if (bVar2) {
            LoadAvatarTag(this,(ENUM_CHARACTERJOB *)&local_10);
          }
          else {
            bVar2 = std::operator==(&local_14,"[equipment]");
            if (bVar2) {
              LoadEquipmentTag(this,(ENUM_CHARACTERJOB *)&local_10);
            }
            else {
              bVar2 = std::operator==(&local_14,"[dungeonindex]");
              if (bVar2) {
                LoadDungeonIndex(this,(ENUM_CHARACTERJOB *)&local_10);
              }
              else {
                bVar2 = std::operator==(&local_14,"[skill]");
                if (bVar2) {
                  LoadSkillTag(this,(ENUM_CHARACTERJOB *)&local_10);
                }
                else {
                  bVar2 = std::operator==(&local_14,"[passive skill]");
                  if (bVar2) {
                    LoadPassiveSkilltag(this,(ENUM_CHARACTERJOB *)&local_10);
                  }
                  else {
                    bVar2 = std::operator==(&local_14,"[tutorial notice]");
                    if (bVar2) {
                      LoadTutorialNotice(this,(ENUM_CHARACTERJOB *)&local_10);
                    }
                    else {
                      bVar2 = std::operator==(&local_14,"[item]");
                      if (bVar2) {
                        LoadItem(this,(ENUM_CHARACTERJOB *)&local_10);
                      }
                      else {
                        pcVar4 = (char *)std::string::c_str((string *)&local_14);
                        local_10 = getCharacterJob(pcVar4);
                      }
                    }
                  }
                }
              }
            }
          }
        }
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      std::string::~string((string *)&local_14);
    } while (bVar2);
    unloadRDARScriptFile();
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
