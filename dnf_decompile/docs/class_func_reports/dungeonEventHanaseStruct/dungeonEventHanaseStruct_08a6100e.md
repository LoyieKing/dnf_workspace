# dungeonEventHanaseStruct

`_ZN24dungeonEventHanaseStructC1ERKS_`

`dungeonEventHanaseStruct::dungeonEventHanaseStruct(dungeonEventHanaseStruct const&)`

| 类 | 地址 |
|---|---|
| `dungeonEventHanaseStruct` | `0x08a6100e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a6100e  _ZN24dungeonEventHanaseStructC1ERKS_
#           dungeonEventHanaseStruct::dungeonEventHanaseStruct(dungeonEventHanaseStruct const&)
# range [0x08a6100e, 0x08a61163]
08a6100e +0x000:  push   %ebp
08a6100f +0x001:  mov    %esp,%ebp
08a61011 +0x003:  push   %edi
08a61012 +0x004:  push   %esi
08a61013 +0x005:  push   %ebx
08a61014 +0x006:  sub    $0x2c,%esp
08a61017 +0x009:  mov    0xc(%ebp),%eax
08a6101a +0x00c:  mov    (%eax),%edx
08a6101c +0x00e:  mov    0x8(%ebp),%eax
08a6101f +0x011:  mov    %edx,(%eax)
08a61021 +0x013:  mov    0xc(%ebp),%eax
08a61024 +0x016:  mov    0x4(%eax),%edx
08a61027 +0x019:  mov    0x8(%ebp),%eax
08a6102a +0x01c:  mov    %edx,0x4(%eax)
08a6102d +0x01f:  mov    0xc(%ebp),%eax
08a61030 +0x022:  mov    0x8(%eax),%edx
08a61033 +0x025:  mov    0x8(%ebp),%eax
08a61036 +0x028:  mov    %edx,0x8(%eax)
08a61039 +0x02b:  mov    0xc(%ebp),%eax
08a6103c +0x02e:  mov    0xc(%eax),%edx
08a6103f +0x031:  mov    0x8(%ebp),%eax
08a61042 +0x034:  mov    %edx,0xc(%eax)
08a61045 +0x037:  mov    0xc(%ebp),%eax
08a61048 +0x03a:  movzbl 0x10(%eax),%edx
08a6104c +0x03e:  mov    0x8(%ebp),%eax
08a6104f +0x041:  mov    %dl,0x10(%eax)
08a61052 +0x044:  mov    0xc(%ebp),%eax
08a61055 +0x047:  mov    0x14(%eax),%edx
08a61058 +0x04a:  mov    0x8(%ebp),%eax
08a6105b +0x04d:  mov    %edx,0x14(%eax)
08a6105e +0x050:  mov    0xc(%ebp),%eax
08a61061 +0x053:  mov    0x18(%eax),%edx
08a61064 +0x056:  mov    0x8(%ebp),%eax
08a61067 +0x059:  mov    %edx,0x18(%eax)
08a6106a +0x05c:  mov    0xc(%ebp),%eax
08a6106d +0x05f:  mov    0x1c(%eax),%edx
08a61070 +0x062:  mov    0x8(%ebp),%eax
08a61073 +0x065:  mov    %edx,0x1c(%eax)
08a61076 +0x068:  mov    0xc(%ebp),%eax
08a61079 +0x06b:  lea    0x20(%eax),%edx
08a6107c +0x06e:  mov    0x8(%ebp),%eax
08a6107f +0x071:  add    $0x20,%eax
08a61082 +0x074:  mov    %edx,0x4(%esp)
08a61086 +0x078:  mov    %eax,(%esp)
08a61089 +0x07b:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
08a6108e +0x080:  mov    0xc(%ebp),%eax
08a61091 +0x083:  mov    0x24(%eax),%edx
08a61094 +0x086:  mov    0x8(%ebp),%eax
08a61097 +0x089:  mov    %edx,0x24(%eax)
08a6109a +0x08c:  movl   $0x0,-0x1c(%ebp)
08a610a1 +0x093:  jmp    08a6112d <+0x11f>
08a610a6 +0x098:  mov    -0x1c(%ebp),%edx
08a610a9 +0x09b:  mov    0x8(%ebp),%eax
08a610ac +0x09e:  add    $0x8,%edx
08a610af +0x0a1:  movl   $0x0,0x8(%eax,%edx,4)
08a610b7 +0x0a9:  mov    -0x1c(%ebp),%edx
08a610ba +0x0ac:  mov    0xc(%ebp),%eax
08a610bd +0x0af:  add    $0x8,%edx
08a610c0 +0x0b2:  mov    0x8(%eax,%edx,4),%eax
08a610c4 +0x0b6:  test   %eax,%eax
08a610c6 +0x0b8:  je     08a61129 <+0x11b>
08a610c8 +0x0ba:  movl   $0x4,(%esp)
08a610cf +0x0c1:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08a610d4 +0x0c6:  mov    %eax,%ebx
08a610d6 +0x0c8:  mov    %ebx,%eax
08a610d8 +0x0ca:  mov    %eax,(%esp)
08a610db +0x0cd:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08a610e0 +0x0d2:  jmp    08a610f4 <+0xe6>
08a610e2 +0x0d4:  mov    %edx,%esi
08a610e4 +0x0d6:  mov    %eax,%edi
08a610e6 +0x0d8:  mov    %ebx,(%esp)
08a610e9 +0x0db:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08a610ee +0x0e0:  mov    %edi,%eax
08a610f0 +0x0e2:  mov    %esi,%edx
08a610f2 +0x0e4:  jmp    08a6113e <+0x130>
08a610f4 +0x0e6:  mov    -0x1c(%ebp),%ecx
08a610f7 +0x0e9:  mov    %ebx,%edx
08a610f9 +0x0eb:  mov    0x8(%ebp),%eax
08a610fc +0x0ee:  add    $0x8,%ecx
08a610ff +0x0f1:  mov    %edx,0x8(%eax,%ecx,4)
08a61103 +0x0f5:  mov    -0x1c(%ebp),%edx
08a61106 +0x0f8:  mov    0xc(%ebp),%eax
08a61109 +0x0fb:  add    $0x8,%edx
08a6110c +0x0fe:  mov    0x8(%eax,%edx,4),%edx
08a61110 +0x102:  mov    -0x1c(%ebp),%ecx
08a61113 +0x105:  mov    0x8(%ebp),%eax
08a61116 +0x108:  add    $0x8,%ecx
08a61119 +0x10b:  mov    0x8(%eax,%ecx,4),%eax
08a6111d +0x10f:  mov    %edx,0x4(%esp)
08a61121 +0x113:  mov    %eax,(%esp)
08a61124 +0x116:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
08a61129 +0x11b:  addl   $0x1,-0x1c(%ebp)
08a6112d +0x11f:  cmpl   $0xa,-0x1c(%ebp)
08a61131 +0x123:  setle  %al
08a61134 +0x126:  test   %al,%al
08a61136 +0x128:  jne    08a610a6 <+0x98>
08a6113c +0x12e:  jmp    08a6115c <+0x14e>
08a6113e +0x130:  mov    %edx,%ebx
08a61140 +0x132:  mov    %eax,%esi
08a61142 +0x134:  mov    0x8(%ebp),%eax
08a61145 +0x137:  add    $0x20,%eax
08a61148 +0x13a:  mov    %eax,(%esp)
08a6114b +0x13d:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08a61150 +0x142:  mov    %esi,%eax
08a61152 +0x144:  mov    %ebx,%edx
08a61154 +0x146:  mov    %eax,(%esp)
08a61157 +0x149:  call   08ae3750 <_Unwind_Resume>
08a6115c +0x14e:  add    $0x2c,%esp
08a6115f +0x151:  pop    %ebx
08a61160 +0x152:  pop    %esi
08a61161 +0x153:  pop    %edi
08a61162 +0x154:  pop    %ebp
08a61163 +0x155:  ret
```

## 反编译 C

```c
// dungeonEventHanaseStruct::dungeonEventHanaseStruct @ 0x8a6100e

/* dungeonEventHanaseStruct::dungeonEventHanaseStruct(dungeonEventHanaseStruct const&) */

void __thiscall
dungeonEventHanaseStruct::dungeonEventHanaseStruct
          (dungeonEventHanaseStruct *this,dungeonEventHanaseStruct *param_1)

{
  string *this_00;
  int local_20;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  this[0x10] = param_1[0x10];
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  std::string::string((string *)(this + 0x20),(string *)(param_1 + 0x20));
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  for (local_20 = 0; local_20 < 0xb; local_20 = local_20 + 1) {
    *(undefined4 *)(this + (local_20 + 8) * 4 + 8) = 0;
    if (*(int *)(param_1 + (local_20 + 8) * 4 + 8) != 0) {
                    /* try { // try from 08a610cf to 08a610d3 has its CatchHandler @ 08a6113e */
      this_00 = operator_new(4);
                    /* try { // try from 08a610db to 08a610df has its CatchHandler @ 08a610e2 */
      std::string::string(this_00);
      *(string **)(this + (local_20 + 8) * 4 + 8) = this_00;
                    /* try { // try from 08a61124 to 08a61128 has its CatchHandler @ 08a6113e */
      std::string::operator=
                (*(string **)(this + (local_20 + 8) * 4 + 8),
                 *(string **)(param_1 + (local_20 + 8) * 4 + 8));
    }
  }
  return;
}
```
