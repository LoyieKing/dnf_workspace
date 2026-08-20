# GenerateCaptchaData

`_ZN10GlobalData19GenerateCaptchaDataEv`

`GlobalData::GenerateCaptchaData()`

| 类 | 地址 |
|---|---|
| `GlobalData` | `0x0829d4b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0829d4b0  _ZN10GlobalData19GenerateCaptchaDataEv
#           GlobalData::GenerateCaptchaData()
# range [0x0829d4b0, 0x0829d604]
0829d4b0 +0x000:  push   %ebp
0829d4b1 +0x001:  mov    %esp,%ebp
0829d4b3 +0x003:  push   %esi
0829d4b4 +0x004:  push   %ebx
0829d4b5 +0x005:  sub    $0x3400,%esp
0829d4bb +0x00b:  lea    -0x14(%ebp),%eax
0829d4be +0x00e:  mov    %eax,(%esp)
0829d4c1 +0x011:  call   080df4e8 <_ZN9GreyImageC1Ev>  ; GreyImage::GreyImage()
0829d4c6 +0x016:  movl   $0x339e,0x8(%esp)
0829d4ce +0x01e:  movl   $0x0,0x4(%esp)
0829d4d6 +0x026:  lea    -0x33e6(%ebp),%eax
0829d4dc +0x02c:  mov    %eax,(%esp)
0829d4df +0x02f:  call   0807dcc0 <_init+0x5b8>
0829d4e4 +0x034:  lea    -0x33e6(%ebp),%eax
0829d4ea +0x03a:  mov    %eax,0xc(%esp)
0829d4ee +0x03e:  movl   $0x5,0x8(%esp)
0829d4f6 +0x046:  movzbl &_ZN11CountryCode6taiwanE,%eax
0829d4fd +0x04d:  mov    %al,0x4(%esp)
0829d501 +0x051:  movl   $&_ZN10GlobalData3cg_E,(%esp)
0829d508 +0x058:  call   080de83c <_ZN10CaptchaGen12generateTextE11CountryCodeiPt>  ; CaptchaGen::generateText(CountryCode, int, unsigned short*)
0829d50d +0x05d:  lea    -0x48(%ebp),%eax
0829d510 +0x060:  mov    %eax,(%esp)
0829d513 +0x063:  call   080de988 <_ZN10CaptchaGen11ImageOptionC1Ev>  ; CaptchaGen::ImageOption::ImageOption()
0829d518 +0x068:  movl   $0x0,-0x40(%ebp)
0829d51f +0x06f:  lea    -0x14(%ebp),%eax
0829d522 +0x072:  mov    %eax,0x18(%esp)
0829d526 +0x076:  lea    -0x48(%ebp),%eax
0829d529 +0x079:  mov    %eax,0x14(%esp)
0829d52d +0x07d:  movl   $0x5,0x10(%esp)
0829d535 +0x085:  lea    -0x33e6(%ebp),%eax
0829d53b +0x08b:  mov    %eax,0xc(%esp)
0829d53f +0x08f:  movl   $0x3c,0x8(%esp)
0829d547 +0x097:  movl   $0xdc,0x4(%esp)
0829d54f +0x09f:  movl   $&_ZN10GlobalData3cg_E,(%esp)
0829d556 +0x0a6:  call   080deade <_ZN10CaptchaGen13generateImageEiiPKtiRKNS_11ImageOptionEP9GreyImage>  ; CaptchaGen::generateImage(int, int, unsigned short const*, int, CaptchaGen::ImageOption const&, GreyImage*)
0829d55b +0x0ab:  lea    -0x14(%ebp),%eax
0829d55e +0x0ae:  mov    %eax,(%esp)
0829d561 +0x0b1:  call   080df5c2 <_ZNK9GreyImage8getWidthEv>  ; GreyImage::getWidth() const
0829d566 +0x0b6:  mov    %eax,%ebx
0829d568 +0x0b8:  lea    -0x14(%ebp),%eax
0829d56b +0x0bb:  mov    %eax,(%esp)
0829d56e +0x0be:  call   080df5cc <_ZNK9GreyImage9getHeightEv>  ; GreyImage::getHeight() const
0829d573 +0x0c3:  imul   %ebx,%eax
0829d576 +0x0c6:  mov    %eax,%ebx
0829d578 +0x0c8:  lea    -0x14(%ebp),%eax
0829d57b +0x0cb:  mov    %eax,(%esp)
0829d57e +0x0ce:  call   080df5e4 <_ZN9GreyImage8getImageEv>  ; GreyImage::getImage()
0829d583 +0x0d3:  mov    %ebx,0x8(%esp)
0829d587 +0x0d7:  mov    %eax,0x4(%esp)
0829d58b +0x0db:  lea    -0x33e6(%ebp),%eax
0829d591 +0x0e1:  add    $0xe,%eax
0829d594 +0x0e4:  mov    %eax,(%esp)
0829d597 +0x0e7:  call   0807d8a0 <_init+0x198>
0829d59c +0x0ec:  lea    -0x14(%ebp),%eax
0829d59f +0x0ef:  mov    %eax,(%esp)
0829d5a2 +0x0f2:  call   080df5c2 <_ZNK9GreyImage8getWidthEv>  ; GreyImage::getWidth() const
0829d5a7 +0x0f7:  mov    %eax,%ebx
0829d5a9 +0x0f9:  lea    -0x14(%ebp),%eax
0829d5ac +0x0fc:  mov    %eax,(%esp)
0829d5af +0x0ff:  call   080df5cc <_ZNK9GreyImage9getHeightEv>  ; GreyImage::getHeight() const
0829d5b4 +0x104:  imul   %ebx,%eax
0829d5b7 +0x107:  mov    %eax,-0x33dc(%ebp)
0829d5bd +0x10d:  lea    -0x33e6(%ebp),%eax
0829d5c3 +0x113:  mov    %eax,0x4(%esp)
0829d5c7 +0x117:  movl   $&_ZN10GlobalData19s_capchaDataManagerE,(%esp)
0829d5ce +0x11e:  call   08299f3a <_ZN8WongWork18CCapchaDataManager4pushERK22MSG_UDP_CAPCHA_CERTIFY>  ; WongWork::CCapchaDataManager::push(MSG_UDP_CAPCHA_CERTIFY const&)
0829d5d3 +0x123:  jmp    0829d5f0 <+0x140>
0829d5d5 +0x125:  mov    %edx,%ebx
0829d5d7 +0x127:  mov    %eax,%esi
0829d5d9 +0x129:  lea    -0x14(%ebp),%eax
0829d5dc +0x12c:  mov    %eax,(%esp)
0829d5df +0x12f:  call   080df50a <_ZN9GreyImageD1Ev>  ; GreyImage::~GreyImage()
0829d5e4 +0x134:  mov    %esi,%eax
0829d5e6 +0x136:  mov    %ebx,%edx
0829d5e8 +0x138:  mov    %eax,(%esp)
0829d5eb +0x13b:  call   08ae3750 <_Unwind_Resume>
0829d5f0 +0x140:  lea    -0x14(%ebp),%eax
0829d5f3 +0x143:  mov    %eax,(%esp)
0829d5f6 +0x146:  call   080df50a <_ZN9GreyImageD1Ev>  ; GreyImage::~GreyImage()
0829d5fb +0x14b:  add    $0x3400,%esp
0829d601 +0x151:  pop    %ebx
0829d602 +0x152:  pop    %esi
0829d603 +0x153:  pop    %ebp
0829d604 +0x154:  ret
```

## 反编译 C

```c
// GlobalData::GenerateCaptchaData @ 0x829d4b0

/* GlobalData::GenerateCaptchaData() */

void GlobalData::GenerateCaptchaData(void)

{
  int iVar1;
  int iVar2;
  void *__src;
  undefined4 uVar3;
  MSG_UDP_CAPCHA_CERTIFY local_33ea [10];
  int local_33e0;
  undefined1 auStack_33dc [13200];
  ImageOption local_4c [8];
  undefined4 local_44;
  GreyImage local_18 [12];
  
  GreyImage::GreyImage(local_18);
  uVar3 = 0;
  memset(local_33ea,0,0x339e);
                    /* try { // try from 0829d508 to 0829d5d2 has its CatchHandler @ 0829d5d5 */
  CaptchaGen::generateText
            ((CaptchaGen *)cg_,
             (CountryCode *)CONCAT31((int3)((uint)uVar3 >> 8),CountryCode::taiwan.idx_),5,
             (ushort *)local_33ea);
  CaptchaGen::ImageOption::ImageOption(local_4c);
  local_44 = 0;
  CaptchaGen::generateImage((CaptchaGen *)cg_,0xdc,0x3c,(ushort *)local_33ea,5,local_4c,local_18);
  iVar1 = GreyImage::getWidth(local_18);
  iVar2 = GreyImage::getHeight(local_18);
  __src = (void *)GreyImage::getImage(local_18);
  memcpy(auStack_33dc,__src,iVar2 * iVar1);
  iVar1 = GreyImage::getWidth(local_18);
  local_33e0 = GreyImage::getHeight(local_18);
  local_33e0 = local_33e0 * iVar1;
  WongWork::CCapchaDataManager::push((CCapchaDataManager *)s_capchaDataManager,local_33ea);
  GreyImage::~GreyImage(local_18);
  return;
}
```
