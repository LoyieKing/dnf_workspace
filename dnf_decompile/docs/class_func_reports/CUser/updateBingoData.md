# updateBingoData

`_ZN5CUser15updateBingoDataEv`

`CUser::updateBingoData()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086914cc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086914cc  _ZN5CUser15updateBingoDataEv
#           CUser::updateBingoData()
# range [0x086914cc, 0x08691549]
086914cc +0x00:  push   %ebp
086914cd +0x01:  mov    %esp,%ebp
086914cf +0x03:  push   %edi
086914d0 +0x04:  push   %esi
086914d1 +0x05:  push   %ebx
086914d2 +0x06:  sub    $0x1c,%esp
086914d5 +0x09:  mov    0x8(%ebp),%eax
086914d8 +0x0c:  mov    %eax,(%esp)
086914db +0x0f:  call   086912b0 <_ZN5CUser12getBingoDataEv>  ; CUser::getBingoData()
086914e0 +0x14:  movzbl 0x6(%eax),%eax
086914e4 +0x18:  test   %al,%al
086914e6 +0x1a:  je     08691542 <+0x76>
086914e8 +0x1c:  mov    0x8(%ebp),%eax
086914eb +0x1f:  mov    %eax,(%esp)
086914ee +0x22:  call   086912b0 <_ZN5CUser12getBingoDataEv>  ; CUser::getBingoData()
086914f3 +0x27:  movzbl 0x5(%eax),%eax
086914f7 +0x2b:  movzbl %al,%edi
086914fa +0x2e:  mov    0x8(%ebp),%eax
086914fd +0x31:  mov    %eax,(%esp)
08691500 +0x34:  call   086912b0 <_ZN5CUser12getBingoDataEv>  ; CUser::getBingoData()
08691505 +0x39:  mov    (%eax),%esi
08691507 +0x3b:  mov    0x8(%ebp),%eax
0869150a +0x3e:  mov    %eax,(%esp)
0869150d +0x41:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08691512 +0x46:  mov    %eax,%ebx
08691514 +0x48:  mov    0x8(%ebp),%eax
08691517 +0x4b:  mov    %eax,(%esp)
0869151a +0x4e:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0869151f +0x53:  mov    %edi,0xc(%esp)
08691523 +0x57:  mov    %esi,0x8(%esp)
08691527 +0x5b:  mov    %ebx,0x4(%esp)
0869152b +0x5f:  mov    %eax,(%esp)
0869152e +0x62:  call   08449032 <_ZN19DB_UpdateBingoEvent11makeRequestEijib>  ; DB_UpdateBingoEvent::makeRequest(int, unsigned int, int, bool)
08691533 +0x67:  mov    0x8(%ebp),%eax
08691536 +0x6a:  mov    %eax,(%esp)
08691539 +0x6d:  call   086912b0 <_ZN5CUser12getBingoDataEv>  ; CUser::getBingoData()
0869153e +0x72:  movb   $0x0,0x6(%eax)
08691542 +0x76:  add    $0x1c,%esp
08691545 +0x79:  pop    %ebx
08691546 +0x7a:  pop    %esi
08691547 +0x7b:  pop    %edi
08691548 +0x7c:  pop    %ebp
08691549 +0x7d:  ret
```

## 反编译 C

```c
// CUser::updateBingoData @ 0x86914cc

/* CUser::updateBingoData() */

void __thiscall CUser::updateBingoData(CUser *this)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  
  iVar2 = getBingoData(this);
  if (*(char *)(iVar2 + 6) != '\0') {
    iVar2 = getBingoData(this);
    bVar1 = *(bool *)(iVar2 + 5);
    piVar3 = (int *)getBingoData(this);
    iVar2 = *piVar3;
    uVar4 = get_acc_id(this);
    iVar5 = GetUID(this);
    DB_UpdateBingoEvent::makeRequest(iVar5,uVar4,iVar2,bVar1);
    iVar2 = getBingoData(this);
    *(undefined1 *)(iVar2 + 6) = 0;
  }
  return;
}
```
