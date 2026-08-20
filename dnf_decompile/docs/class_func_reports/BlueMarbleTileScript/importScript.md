# importScript

`_ZN20BlueMarbleTileScript12importScriptEPKc`

`BlueMarbleTileScript::importScript(char const*)`

| 类 | 地址 |
|---|---|
| `BlueMarbleTileScript` | `0x088d509c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088d509c  _ZN20BlueMarbleTileScript12importScriptEPKc
#           BlueMarbleTileScript::importScript(char const*)
# range [0x088d509c, 0x088d5209]
088d509c +0x000:  push   %ebp
088d509d +0x001:  mov    %esp,%ebp
088d509f +0x003:  push   %esi
088d50a0 +0x004:  push   %ebx
088d50a1 +0x005:  sub    $0x20,%esp
088d50a4 +0x008:  mov    0xc(%ebp),%eax
088d50a7 +0x00b:  mov    %eax,0x4(%esp)
088d50ab +0x00f:  movl   $"",(%esp)
088d50b2 +0x016:  call   088bbd29 <_Z18loadRDARScriptFilePKcS0_>  ; loadRDARScriptFile(char const*, char const*)
088d50b7 +0x01b:  xor    $0x1,%eax
088d50ba +0x01e:  test   %al,%al
088d50bc +0x020:  je     088d50c8 <+0x2c>
088d50be +0x022:  mov    $0x0,%ebx
088d50c3 +0x027:  jmp    088d5201 <+0x165>
088d50c8 +0x02c:  lea    -0x10(%ebp),%eax
088d50cb +0x02f:  mov    %eax,(%esp)
088d50ce +0x032:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
088d50d3 +0x037:  lea    -0x14(%ebp),%eax
088d50d6 +0x03a:  mov    %eax,(%esp)
088d50d9 +0x03d:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
088d50de +0x042:  movl   $0x0,-0x18(%ebp)
088d50e5 +0x049:  jmp    088d50eb <+0x4f>
088d50e7 +0x04b:  nop
088d50e8 +0x04c:  jmp    088d50eb <+0x4f>
088d50ea +0x04e:  nop
088d50eb +0x04f:  movl   $0x1,0x4(%esp)
088d50f3 +0x057:  lea    -0x10(%ebp),%eax
088d50f6 +0x05a:  mov    %eax,(%esp)
088d50f9 +0x05d:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
088d50fe +0x062:  xor    $0x1,%eax
088d5101 +0x065:  test   %al,%al
088d5103 +0x067:  jne    088d51b3 <+0x117>
088d5109 +0x06d:  movl   $"[type]",0x4(%esp)
088d5111 +0x075:  lea    -0x10(%ebp),%eax
088d5114 +0x078:  mov    %eax,(%esp)
088d5117 +0x07b:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088d511c +0x080:  test   %al,%al
088d511e +0x082:  je     088d5176 <+0xda>
088d5120 +0x084:  lea    -0x14(%ebp),%eax
088d5123 +0x087:  mov    %eax,(%esp)
088d5126 +0x08a:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
088d512b +0x08f:  lea    -0x14(%ebp),%eax
088d512e +0x092:  mov    %eax,0x4(%esp)
088d5132 +0x096:  lea    -0xc(%ebp),%eax
088d5135 +0x099:  mov    %eax,(%esp)
088d5138 +0x09c:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
088d513d +0x0a1:  lea    -0xc(%ebp),%eax
088d5140 +0x0a4:  mov    %eax,0x4(%esp)
088d5144 +0x0a8:  mov    0x8(%ebp),%eax
088d5147 +0x0ab:  mov    %eax,(%esp)
088d514a +0x0ae:  call   088d520a <_ZN20BlueMarbleTileScript6toTypeESs>  ; BlueMarbleTileScript::toType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >)
088d514f +0x0b3:  mov    0x8(%ebp),%edx
088d5152 +0x0b6:  mov    %eax,(%edx)
088d5154 +0x0b8:  lea    -0xc(%ebp),%eax
088d5157 +0x0bb:  mov    %eax,(%esp)
088d515a +0x0be:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088d515f +0x0c3:  jmp    088d50eb <+0x4f>
088d5161 +0x0c5:  mov    %edx,%ebx
088d5163 +0x0c7:  mov    %eax,%esi
088d5165 +0x0c9:  lea    -0xc(%ebp),%eax
088d5168 +0x0cc:  mov    %eax,(%esp)
088d516b +0x0cf:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088d5170 +0x0d4:  mov    %esi,%eax
088d5172 +0x0d6:  mov    %ebx,%edx
088d5174 +0x0d8:  jmp    088d51c6 <+0x12a>
088d5176 +0x0da:  movl   $"[enter dungeon]",0x4(%esp)
088d517e +0x0e2:  lea    -0x10(%ebp),%eax
088d5181 +0x0e5:  mov    %eax,(%esp)
088d5184 +0x0e8:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088d5189 +0x0ed:  test   %al,%al
088d518b +0x0ef:  je     088d50e7 <+0x4b>
088d5191 +0x0f5:  lea    -0x18(%ebp),%eax
088d5194 +0x0f8:  mov    %eax,(%esp)
088d5197 +0x0fb:  call   088bc424 <_Z7ScanIntPi>  ; ScanInt(int*)
088d519c +0x100:  mov    -0x18(%ebp),%eax
088d519f +0x103:  test   %eax,%eax
088d51a1 +0x105:  je     088d50ea <+0x4e>
088d51a7 +0x10b:  mov    0x8(%ebp),%eax
088d51aa +0x10e:  movb   $0x1,0x4(%eax)
088d51ae +0x112:  jmp    088d50eb <+0x4f>
088d51b3 +0x117:  nop
088d51b4 +0x118:  mov    $0x1,%ebx
088d51b9 +0x11d:  lea    -0x14(%ebp),%eax
088d51bc +0x120:  mov    %eax,(%esp)
088d51bf +0x123:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088d51c4 +0x128:  jmp    088d51f6 <+0x15a>
088d51c6 +0x12a:  mov    %edx,%ebx
088d51c8 +0x12c:  mov    %eax,%esi
088d51ca +0x12e:  lea    -0x14(%ebp),%eax
088d51cd +0x131:  mov    %eax,(%esp)
088d51d0 +0x134:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088d51d5 +0x139:  mov    %esi,%eax
088d51d7 +0x13b:  mov    %ebx,%edx
088d51d9 +0x13d:  jmp    088d51db <+0x13f>
088d51db +0x13f:  mov    %edx,%ebx
088d51dd +0x141:  mov    %eax,%esi
088d51df +0x143:  lea    -0x10(%ebp),%eax
088d51e2 +0x146:  mov    %eax,(%esp)
088d51e5 +0x149:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088d51ea +0x14e:  mov    %esi,%eax
088d51ec +0x150:  mov    %ebx,%edx
088d51ee +0x152:  mov    %eax,(%esp)
088d51f1 +0x155:  call   08ae3750 <_Unwind_Resume>
088d51f6 +0x15a:  lea    -0x10(%ebp),%eax
088d51f9 +0x15d:  mov    %eax,(%esp)
088d51fc +0x160:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088d5201 +0x165:  mov    %ebx,%eax
088d5203 +0x167:  add    $0x20,%esp
088d5206 +0x16a:  pop    %ebx
088d5207 +0x16b:  pop    %esi
088d5208 +0x16c:  pop    %ebp
088d5209 +0x16d:  ret
```

## 反编译 C

```c
// BlueMarbleTileScript::importScript @ 0x88d509c

/* BlueMarbleTileScript::importScript(char const*) */

undefined4 __thiscall BlueMarbleTileScript::importScript(BlueMarbleTileScript *this,char *param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int local_1c;
  string local_18 [4];
  string local_14;
  string local_10 [4];
  
  cVar1 = loadRDARScriptFile("",param_1);
  if (cVar1 == '\x01') {
    std::string::string((string *)&local_14);
                    /* try { // try from 088d50d9 to 088d50dd has its CatchHandler @ 088d51db */
    std::string::string(local_18);
    local_1c = 0;
                    /* try { // try from 088d50f9 to 088d513c has its CatchHandler @ 088d51c6 */
    while (cVar1 = ScanType((string *)&local_14,true), cVar1 == '\x01') {
      bVar2 = std::operator==(&local_14,"[type]");
      if (bVar2) {
        ScanStr(local_18);
        std::string::string(local_10,local_18);
                    /* try { // try from 088d514a to 088d514e has its CatchHandler @ 088d5161 */
        uVar3 = toType(this,local_10);
        *(undefined4 *)this = uVar3;
                    /* try { // try from 088d515a to 088d515e has its CatchHandler @ 088d51c6 */
        std::string::~string(local_10);
      }
      else {
                    /* try { // try from 088d5184 to 088d519b has its CatchHandler @ 088d51c6 */
        bVar2 = std::operator==(&local_14,"[enter dungeon]");
        if ((bVar2) && (ScanInt(&local_1c), local_1c != 0)) {
          this[4] = (BlueMarbleTileScript)0x1;
        }
      }
    }
    uVar3 = 1;
                    /* try { // try from 088d51bf to 088d51c3 has its CatchHandler @ 088d51db */
    std::string::~string(local_18);
    std::string::~string((string *)&local_14);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
