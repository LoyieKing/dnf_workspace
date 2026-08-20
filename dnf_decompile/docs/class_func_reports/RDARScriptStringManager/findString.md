# findString

`_ZNK23RDARScriptStringManager10findStringEiPKcPb`

`RDARScriptStringManager::findString(int, char const*, bool*) const`

| 类 | 地址 |
|---|---|
| `RDARScriptStringManager` | `0x08aa57fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08aa57fe  _ZNK23RDARScriptStringManager10findStringEiPKcPb
#           RDARScriptStringManager::findString(int, char const*, bool*) const
# range [0x08aa57fe, 0x08aa594b]
08aa57fe +0x000:  push   %ebp
08aa57ff +0x001:  mov    %esp,%ebp
08aa5801 +0x003:  push   %ebx
08aa5802 +0x004:  sub    $0x34,%esp
08aa5805 +0x007:  cmpl   $0x0,0x10(%ebp)
08aa5809 +0x00b:  jne    08aa5815 <+0x17>
08aa580b +0x00d:  mov    $"RDARScriptStringManager::ERROR::input NULL string",%eax
08aa5810 +0x012:  jmp    08aa5946 <+0x148>
08aa5815 +0x017:  mov    0x8(%ebp),%eax
08aa5818 +0x01a:  add    $0x18,%eax
08aa581b +0x01d:  mov    %eax,(%esp)
08aa581e +0x020:  call   08aa68b2 <_GLOBAL__I__ZN23RDARScriptStringManagerC2Ev+0x194>  ; global constructors keyed to RDARScriptStringManager::RDARScriptStringManager()+0x194
08aa5823 +0x025:  cmp    0xc(%ebp),%eax
08aa5826 +0x028:  setle  %al
08aa5829 +0x02b:  test   %al,%al
08aa582b +0x02d:  je     08aa5837 <+0x39>
08aa582d +0x02f:  mov    $"RDARScriptStringManager::ERROR::requested fileIndex isn't in string table",%eax
08aa5832 +0x034:  jmp    08aa5946 <+0x148>
08aa5837 +0x039:  cmpl   $0x0,0xc(%ebp)
08aa583b +0x03d:  js     08aa584e <+0x50>
08aa583d +0x03f:  movl   $&g_scriptStringManager_+0x18,(%esp)
08aa5844 +0x046:  call   08aa68b2 <_GLOBAL__I__ZN23RDARScriptStringManagerC2Ev+0x194>  ; global constructors keyed to RDARScriptStringManager::RDARScriptStringManager()+0x194
08aa5849 +0x04b:  cmp    0xc(%ebp),%eax
08aa584c +0x04e:  jg     08aa5855 <+0x57>
08aa584e +0x050:  mov    $0x1,%eax
08aa5853 +0x055:  jmp    08aa585a <+0x5c>
08aa5855 +0x057:  mov    $0x0,%eax
08aa585a +0x05c:  test   %al,%al
08aa585c +0x05e:  je     08aa58b6 <+0xb8>
08aa585e +0x060:  mov    0xc(%ebp),%eax
08aa5861 +0x063:  mov    %eax,0x14(%esp)
08aa5865 +0x067:  movl   $"오류 : 스트링 테이블 %d 는 범위를 벗어납니다. (index out of range reading string table %d)",0x10(%esp)
08aa586d +0x06f:  movl   $0x11c,0xc(%esp)
08aa5875 +0x077:  movl   $&_ZZNK23RDARScriptStringManager10findStringEiPKcPbE12__FUNCTION__,0x8(%esp)
08aa587d +0x07f:  movl   $"../RDARScriptStringManager.cpp",0x4(%esp)
08aa5885 +0x087:  movl   $0x0,(%esp)
08aa588c +0x08e:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08aa5891 +0x093:  mov    0xc(%ebp),%eax
08aa5894 +0x096:  mov    %eax,0x8(%esp)
08aa5898 +0x09a:  movl   $"String table index out of range %d",0x4(%esp)
08aa58a0 +0x0a2:  movl   $&_ZZNK23RDARScriptStringManager10findStringEiPKcPbE6errStr,(%esp)
08aa58a7 +0x0a9:  call   08aa69b4 <_GLOBAL__I__ZN23RDARScriptStringManagerC2Ev+0x296>  ; global constructors keyed to RDARScriptStringManager::RDARScriptStringManager()+0x296
08aa58ac +0x0ae:  mov    $&_ZZNK23RDARScriptStringManager10findStringEiPKcPbE6errStr,%eax
08aa58b1 +0x0b3:  jmp    08aa5946 <+0x148>
08aa58b6 +0x0b8:  mov    0x10(%ebp),%eax
08aa58b9 +0x0bb:  mov    %eax,(%esp)
08aa58bc +0x0be:  call   08adeb75 <_Z9toTStringPKc>  ; toTString(char const*)
08aa58c1 +0x0c3:  mov    %eax,%ebx
08aa58c3 +0x0c5:  mov    0xc(%ebp),%eax
08aa58c6 +0x0c8:  mov    0x8(%ebp),%edx
08aa58c9 +0x0cb:  add    $0x18,%edx
08aa58cc +0x0ce:  mov    %eax,0x4(%esp)
08aa58d0 +0x0d2:  mov    %edx,(%esp)
08aa58d3 +0x0d5:  call   08aa69ea <_GLOBAL__I__ZN23RDARScriptStringManagerC2Ev+0x2cc>  ; global constructors keyed to RDARScriptStringManager::RDARScriptStringManager()+0x2cc
08aa58d8 +0x0da:  mov    (%eax),%eax
08aa58da +0x0dc:  mov    %ebx,0x4(%esp)
08aa58de +0x0e0:  mov    %eax,(%esp)
08aa58e1 +0x0e3:  call   08ab2528 <_ZNK16StringDictionary3getEPKc>  ; StringDictionary::get(char const*) const
08aa58e6 +0x0e8:  mov    %eax,-0xc(%ebp)
08aa58e9 +0x0eb:  cmpl   $0x0,0x14(%ebp)
08aa58ed +0x0ef:  je     08aa58fb <+0xfd>
08aa58ef +0x0f1:  cmpl   $0x0,-0xc(%ebp)
08aa58f3 +0x0f5:  setne  %dl
08aa58f6 +0x0f8:  mov    0x14(%ebp),%eax
08aa58f9 +0x0fb:  mov    %dl,(%eax)
08aa58fb +0x0fd:  cmpl   $0x0,-0xc(%ebp)
08aa58ff +0x101:  je     08aa5906 <+0x108>
08aa5901 +0x103:  mov    -0xc(%ebp),%eax
08aa5904 +0x106:  jmp    08aa5946 <+0x148>
08aa5906 +0x108:  mov    0x8(%ebp),%eax
08aa5909 +0x10b:  mov    0xc(%ebp),%edx
08aa590c +0x10e:  mov    %edx,0x4(%esp)
08aa5910 +0x112:  mov    %eax,(%esp)
08aa5913 +0x115:  call   088bad4e <_ZNK16STScriptFileList11GetFileNameEi>  ; STScriptFileList::GetFileName(int) const
08aa5918 +0x11a:  mov    %eax,%ebx
08aa591a +0x11c:  mov    0x10(%ebp),%eax
08aa591d +0x11f:  mov    %eax,(%esp)
08aa5920 +0x122:  call   08adeb75 <_Z9toTStringPKc>  ; toTString(char const*)
08aa5925 +0x127:  mov    %ebx,0xc(%esp)
08aa5929 +0x12b:  mov    %eax,0x8(%esp)
08aa592d +0x12f:  movl   $"%s == NULL, %s : ",0x4(%esp)
08aa5935 +0x137:  movl   $&_ZZNK23RDARScriptStringManager10findStringEiPKcPbE6errStr_0,(%esp)
08aa593c +0x13e:  call   08aa69b4 <_GLOBAL__I__ZN23RDARScriptStringManagerC2Ev+0x296>  ; global constructors keyed to RDARScriptStringManager::RDARScriptStringManager()+0x296
08aa5941 +0x143:  mov    $&_ZZNK23RDARScriptStringManager10findStringEiPKcPbE6errStr_0,%eax
08aa5946 +0x148:  add    $0x34,%esp
08aa5949 +0x14b:  pop    %ebx
08aa594a +0x14c:  pop    %ebp
08aa594b +0x14d:  ret
```

## 反编译 C

```c
// RDARScriptStringManager::findString @ 0x8aa57fe

/* RDARScriptStringManager::findString(int, char const*, bool*) const */

char * __thiscall
RDARScriptStringManager::findString
          (RDARScriptStringManager *this,int param_1,char *param_2,bool *param_3)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  TCHAR *pTVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  if (param_2 == (char *)0x0) {
    pcVar2 = "RDARScriptStringManager::ERROR::input NULL string";
  }
  else {
    iVar3 = std::vector<StringDictionary*,std::allocator<StringDictionary*>>::size
                      ((vector<StringDictionary*,std::allocator<StringDictionary*>> *)(this + 0x18))
    ;
    if (param_1 < iVar3) {
      if ((param_1 < 0) ||
         (iVar3 = std::vector<StringDictionary*,std::allocator<StringDictionary*>>::size
                            ((vector<StringDictionary*,std::allocator<StringDictionary*>> *)
                             (g_scriptStringManager_ + 0x18)), iVar3 <= param_1)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        LogManager::logFormat
                  (0,"../RDARScriptStringManager.cpp","findString",0x11c,&DAT_08e2a824,param_1);
        ss_sprintf<256u>(findString(int,char_const*,bool*)::errStr,
                         "String table index out of range %d",param_1);
        pcVar2 = findString(int,char_const*,bool*)::errStr;
      }
      else {
        pTVar4 = toTString(param_2);
        puVar5 = (undefined4 *)
                 std::vector<StringDictionary*,std::allocator<StringDictionary*>>::operator[]
                           ((vector<StringDictionary*,std::allocator<StringDictionary*>> *)
                            (this + 0x18),param_1);
        pcVar2 = (char *)StringDictionary::get((StringDictionary *)*puVar5,pTVar4);
        if (param_3 != (bool *)0x0) {
          *param_3 = pcVar2 != (char *)0x0;
        }
        if (pcVar2 == (char *)0x0) {
          uVar6 = STScriptFileList::GetFileName((int)this);
          pTVar4 = toTString(param_2);
          ss_sprintf<256u>(findString(int,char_const*,bool*)::errStr,"%s == NULL, %s : ",pTVar4,
                           uVar6);
          pcVar2 = findString(int,char_const*,bool*)::errStr;
        }
      }
    }
    else {
      pcVar2 = "RDARScriptStringManager::ERROR::requested fileIndex isn\'t in string table";
    }
  }
  return pcVar2;
}
```
