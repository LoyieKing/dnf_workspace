# StreamIn

`_ZN12TiXmlComment8StreamInEPSiPSs`

`TiXmlComment::StreamIn(std::basic_istream<char, std::char_traits<char> >*, std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)`

| 类 | 地址 |
|---|---|
| `TiXmlComment` | `0x087e9200` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e9200  _ZN12TiXmlComment8StreamInEPSiPSs
#           TiXmlComment::StreamIn(std::basic_istream<char, std::char_traits<char> >*, std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
# range [0x087e9200, 0x087e9359]
087e9200 +0x000:  push   %ebp
087e9201 +0x001:  mov    %esp,%ebp
087e9203 +0x003:  push   %edi
087e9204 +0x004:  push   %esi
087e9205 +0x005:  push   %ebx
087e9206 +0x006:  sub    $0x4c,%esp
087e9209 +0x009:  mov    0xc(%ebp),%esi
087e920c +0x00c:  mov    0x10(%ebp),%ebx
087e920f +0x00f:  nop
087e9210 +0x010:  mov    (%esi),%eax
087e9212 +0x012:  mov    -0xc(%eax),%eax
087e9215 +0x015:  mov    0x14(%esi,%eax,1),%eax
087e9219 +0x019:  test   %eax,%eax
087e921b +0x01b:  jne    087e92d8 <+0xd8>
087e9221 +0x021:  mov    %esi,(%esp)
087e9224 +0x024:  call   086e5cf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x5c50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x5c50
087e9229 +0x029:  test   %eax,%eax
087e922b +0x02b:  jle    087e92e0 <+0xe0>
087e9231 +0x031:  mov    (%ebx),%edx
087e9233 +0x033:  mov    -0xc(%edx),%edi
087e9236 +0x036:  lea    -0xc(%edx),%ecx
087e9239 +0x039:  mov    %ecx,-0x1c(%ebp)
087e923c +0x03c:  mov    %edi,-0x3c(%ebp)
087e923f +0x03f:  add    $0x1,%edi
087e9242 +0x042:  cmp    0x4(%ecx),%edi
087e9245 +0x045:  mov    %edi,-0x2c(%ebp)
087e9248 +0x048:  ja     087e9251 <+0x51>
087e924a +0x04a:  mov    0x8(%ecx),%ecx
087e924d +0x04d:  test   %ecx,%ecx
087e924f +0x04f:  jle    087e926e <+0x6e>
087e9251 +0x051:  mov    -0x2c(%ebp),%edx
087e9254 +0x054:  mov    %eax,-0x20(%ebp)
087e9257 +0x057:  mov    %ebx,(%esp)
087e925a +0x05a:  mov    %edx,0x4(%esp)
087e925e +0x05e:  call   08707d10 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1920>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1920
087e9263 +0x063:  mov    (%ebx),%edx
087e9265 +0x065:  mov    -0x20(%ebp),%eax
087e9268 +0x068:  mov    -0xc(%edx),%ecx
087e926b +0x06b:  mov    %ecx,-0x3c(%ebp)
087e926e +0x06e:  mov    -0x3c(%ebp),%edi
087e9271 +0x071:  mov    %al,(%edx,%edi,1)
087e9274 +0x074:  mov    (%ebx),%ecx
087e9276 +0x076:  lea    -0xc(%ecx),%edx
087e9279 +0x079:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%edx
087e927f +0x07f:  jne    087e9333 <+0x133>
087e9285 +0x085:  cmp    $0x3e,%eax
087e9288 +0x088:  jne    087e9210 <+0x10>
087e928a +0x08a:  mov    (%ebx),%eax
087e928c +0x08c:  mov    -0xc(%eax),%edi
087e928f +0x08f:  lea    -0xc(%eax),%edx
087e9292 +0x092:  mov    %edi,%ecx
087e9294 +0x094:  add    $0xfffffffe,%ecx
087e9297 +0x097:  jae    087e934a <+0x14a>
087e929d +0x09d:  mov    0x8(%edx),%edx
087e92a0 +0x0a0:  test   %edx,%edx
087e92a2 +0x0a2:  js     087e92ae <+0xae>
087e92a4 +0x0a4:  mov    %ebx,(%esp)
087e92a7 +0x0a7:  call   08708e00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2a10>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2a10
087e92ac +0x0ac:  mov    (%ebx),%eax
087e92ae +0x0ae:  cmpb   $0x2d,-0x2(%eax,%edi,1)
087e92b3 +0x0b3:  jne    087e9210 <+0x10>
087e92b9 +0x0b9:  mov    -0xc(%eax),%eax
087e92bc +0x0bc:  mov    %ebx,(%esp)
087e92bf +0x0bf:  sub    $0x3,%eax
087e92c2 +0x0c2:  mov    %eax,0x4(%esp)
087e92c6 +0x0c6:  call   08708e70 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2a80>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2a80
087e92cb +0x0cb:  cmpb   $0x2d,(%eax)
087e92ce +0x0ce:  jne    087e9210 <+0x10>
087e92d4 +0x0d4:  lea    0x0(%esi,%eiz,1),%esi
087e92d8 +0x0d8:  add    $0x4c,%esp
087e92db +0x0db:  pop    %ebx
087e92dc +0x0dc:  pop    %esi
087e92dd +0x0dd:  pop    %edi
087e92de +0x0de:  pop    %ebp
087e92df +0x0df:  ret
087e92e0 +0x0e0:  mov    0x8(%ebp),%eax
087e92e3 +0x0e3:  mov    %eax,(%esp)
087e92e6 +0x0e6:  call   087dfed0 <_ZNK9TiXmlNode11GetDocumentEv>  ; TiXmlNode::GetDocument() const
087e92eb +0x0eb:  test   %eax,%eax
087e92ed +0x0ed:  mov    %eax,%ebx
087e92ef +0x0ef:  je     087e92d8 <+0xd8>
087e92f1 +0x0f1:  cmpb   $0x0,0x2c(%eax)
087e92f5 +0x0f5:  jne    087e92d8 <+0xd8>
087e92f7 +0x0f7:  mov    &_ZN9TiXmlBase11errorStringE+0x34,%esi
087e92fd +0x0fd:  movb   $0x1,0x2c(%eax)
087e9301 +0x101:  movl   $0xd,0x30(%eax)
087e9308 +0x108:  mov    %esi,(%esp)
087e930b +0x10b:  call   0807e3b0 <_init+0xca8>
087e9310 +0x110:  mov    %esi,0x4(%esp)
087e9314 +0x114:  mov    %eax,0x8(%esp)
087e9318 +0x118:  lea    0x34(%ebx),%eax
087e931b +0x11b:  mov    %eax,(%esp)
087e931e +0x11e:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087e9323 +0x123:  movl   $0xffffffff,0x40(%ebx)
087e932a +0x12a:  movl   $0xffffffff,0x3c(%ebx)
087e9331 +0x131:  jmp    087e92d8 <+0xd8>
087e9333 +0x133:  mov    -0x2c(%ebp),%edi
087e9336 +0x136:  movl   $0x0,0x8(%edx)
087e933d +0x13d:  mov    %edi,-0xc(%ecx)
087e9340 +0x140:  movb   $0x0,0xc(%edx,%edi,1)
087e9345 +0x145:  jmp    087e9285 <+0x85>
087e934a +0x14a:  movl   $"basic_string::at",(%esp)
087e9351 +0x151:  call   086d9b70 <_ZSt20__throw_out_of_rangePKc>  ; std::__throw_out_of_range(char const*)
087e9356 +0x156:  lea    0x0(%esi),%esi
087e9359 +0x159:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TiXmlComment::StreamIn @ 0x87e9200

/* TiXmlComment::StreamIn(std::istream*, std::string*) */

void __thiscall TiXmlComment::StreamIn(TiXmlComment *this,istream *param_1,string *param_2)

{
  undefined1 *puVar1;
  undefined4 __s;
  int iVar2;
  char *pcVar3;
  size_t sVar4;
  int iVar5;
  uint uVar6;
  int local_40;
  
  do {
    do {
      if (*(int *)(param_1 + *(int *)(*(int *)param_1 + -0xc) + 0x14) != 0) {
        return;
      }
      iVar2 = std::istream::get(param_1);
      if (iVar2 < 1) {
        iVar2 = TiXmlNode::GetDocument((TiXmlNode *)this);
        __s = TiXmlBase::errorString._52_4_;
        if (iVar2 == 0) {
          return;
        }
        if (*(char *)(iVar2 + 0x2c) != '\0') {
          return;
        }
        *(undefined1 *)(iVar2 + 0x2c) = 1;
        *(undefined4 *)(iVar2 + 0x30) = 0xd;
        sVar4 = strlen((char *)__s);
        std::string::assign((string *)(iVar2 + 0x34),(char *)__s,sVar4);
        *(undefined4 *)(iVar2 + 0x40) = 0xffffffff;
        *(undefined4 *)(iVar2 + 0x3c) = 0xffffffff;
        return;
      }
      iVar5 = *(int *)param_2;
      local_40 = *(int *)(iVar5 + -0xc);
      uVar6 = local_40 + 1;
      if ((*(uint *)(iVar5 + -8) < uVar6) || (0 < *(int *)(iVar5 + -4))) {
        std::string::reserve(param_2,uVar6);
        iVar5 = *(int *)param_2;
        local_40 = *(int *)(iVar5 + -0xc);
      }
      *(char *)(iVar5 + local_40) = (char)iVar2;
      puVar1 = *(undefined1 **)param_2;
      if (puVar1 != &DAT_0948ccfc) {
        *(undefined4 *)(puVar1 + -4) = 0;
        *(uint *)(puVar1 + -0xc) = uVar6;
        puVar1[uVar6] = 0;
      }
    } while (iVar2 != 0x3e);
    iVar2 = *(int *)param_2;
    uVar6 = *(uint *)(iVar2 + -0xc);
    if (uVar6 < 2) {
                    /* WARNING: Subroutine does not return */
      std::__throw_out_of_range("basic_string::at");
    }
    if (-1 < *(int *)(iVar2 + -4)) {
      std::string::_M_leak_hard(param_2);
      iVar2 = *(int *)param_2;
    }
  } while ((*(char *)(iVar2 + -2 + uVar6) != '-') ||
          (pcVar3 = (char *)std::string::at(param_2,*(int *)(iVar2 + -0xc) - 3), *pcVar3 != '-'));
  return;
}
```
