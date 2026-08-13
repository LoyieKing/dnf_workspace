#!/usr/bin/env python3
# 一次性机械重命名：把 statics 头文件里已还原语义的字段名同步到 .cpp 使用点。
# 只改名字，不改类型/偏移/大小。整 token 匹配（m_field4 不会误伤 m_field48），
# 按函数行范围 + 访问前缀细分，避免跨结构体同名冲突。
import re


TOKEN = re.compile(r"(?<![A-Za-z0-9_])(m_(?:field|str)[A-Za-z0-9_]+)(?![A-Za-z0-9_])")


def read_lines(path):
    with open(path, "r", encoding="utf-8", errors="replace") as f:
        return f.readlines()


def write_lines(path, lines):
    with open(path, "w", encoding="utf-8", errors="replace") as f:
        f.writelines(lines)


def apply_bare(lines, start, end, mapping):
    """[start, end) 行区间内做整 token 替换。"""
    for i in range(start, end):
        lines[i] = TOKEN.sub(lambda m: mapping.get(m.group(1), m.group(1)), lines[i])


def apply_pref(lines, start, end, prefix, mapping):
    """只替换带访问前缀的 token，prefix 形如 'v.' / 'it->first.' / 'm_p2p.'。"""
    pat = re.compile(re.escape(prefix) + r"(m_(?:field|str)[A-Za-z0-9_]+)(?![A-Za-z0-9_])")
    for i in range(start, end):
        lines[i] = pat.sub(lambda m: prefix + mapping.get(m.group(1), m.group(1)), lines[i])


def main():
    base = "source/DNFServer/GameServer/Statics/"

    CUBE = {"m_field0": "m_channel", "m_field4": "m_index", "m_field8": "m_level",
            "m_fieldc": "m_type"}
    CUBE_ITEM = {"m_field0": "m_channel", "m_field8": "m_level", "m_field4": "m_itemIndex",
                 "m_fieldc": "m_type", "m_value": "m_itemCount"}
    PARTY_KEY = {"m_field0": "m_channelNo", "m_field4": "m_dungeonIndex",
                 "m_field8": "m_dungeonDiff", "m_field9": "m_dungeonStandardLevel",
                 "m_fielda": "m_abuseParty", "m_fieldb": "m_balkunParty",
                 "m_fieldc": "m_success", "m_fieldd": "m_partyUserCount"}
    PARTY_JOB_KEY = dict(PARTY_KEY)
    PARTY_JOB_KEY.update({"m_field10": "m_characJob", "m_field14": "m_characGrow"})
    PARTY_CHARAC_KEY = {"m_field0": "m_channelNo", "m_field4": "m_dungeonIndex",
                        "m_field8": "m_dungeonDiff", "m_field9": "m_dungeonStandardLevel",
                        "m_fielda": "m_success", "m_fieldc": "m_characJob",
                        "m_field10": "m_characGrow", "m_field11": "m_partyUserCount"}
    DT_VALUE_KEY = {"m_field0": "m_type", "m_field2": "m_level", "m_field4": "m_counterIdx"}
    DT_JOB_KEY = {"m_field0": "m_deathTowerType", "m_field2": "m_level",
                  "m_field4": "m_characJob", "m_field8": "m_characGrow"}
    DT_PARTY_KEY = {"m_field0": "m_deathTowerType", "m_field1": "m_partyCount"}
    OVERFLOW_KEY = {"m_field0": "m_packetType", "m_field2": "m_packetKind",
                    "m_field4": "m_cnt"}
    ASSERT_KEY = {"m_field100": "m_fileLine", "m_str0": "m_fileName", "m_str2": "m_reason"}
    TING_KEY = {"m_field0": "m_minute"}
    HELL_KEY = {"m_field0": "m_hellpartyType", "m_field4": "m_dungeonIndex",
                "m_field8": "m_dungeonDiff", "m_field9": "m_partyCount",
                "m_fielda": "m_hellpartyDiff"}
    PW_LOAD_KEY = {"m_field0": "m_mId", "m_field4": "m_round"}
    PW_LOAD_DATA = {"m_field0": "m_player", "m_field2": "m_myLoading",
                    "m_field4": "m_otherLoading", "m_field6": "m_vsLoading"}
    PW_LAG_KEY = {"m_field0": "m_mId", "m_field4": "m_round"}
    PW_LAG_DATA = {"m_field0": "m_player", "m_field4": "m_lagAvg", "m_field8": "m_lagCnt"}
    FATIGUE = {"m_field0": "m_money", "m_field4": "m_buff"}
    P2P = {"m_field0": "m_p2pUser", "m_field4": "m_relayUser", "m_field8": "m_serverGroup",
           "m_fieldA": "m_p2pMinPing", "m_fieldC": "m_p2pMaxPing", "m_fieldE": "m_p2pAvgPing",
           "m_field10": "m_p2pPingSum", "m_field14": "m_p2pPingCnt",
           "m_field18": "m_p2pOverPing100", "m_field1c": "m_p2pOverPing200",
           "m_field20": "m_p2pOverPing300", "m_field24": "m_p2pOverPing400",
           "m_fieldB": "m_relayMinPing", "m_field2a": "m_relayMaxPing",
           "m_field2c": "m_relayAvgPing", "m_field30": "m_relayPingSum",
           "m_field34": "m_relayPingCnt", "m_field38": "m_relayOverPing100",
           "m_field3c": "m_relayOverPing200", "m_field40": "m_relayOverPing300",
           "m_field44": "m_relayOverPing400"}
    GOLDCARD = {"m_field0": "m_level", "m_field1": "m_createCnt", "m_field5": "m_openCnt"}
    BLOOD = {"m_field0": "m_tryCount", "m_field4": "m_clearCount"}
    TING_ITEM = {"m_field0": "m_id", "m_field4": "m_minute"}
    TING_WRITE_ITEM = {"m_field0": "m_minute", "m_field4": "m_cnt"}
    SMATCH = {"m_fieldA": "m_serverId", "m_fieldB": "m_winCount", "m_fieldC": "m_loseCount"}
    SPEC_MON = {"m_field4": "m_cpuVendor", "m_field5": "m_cpuProcessorNum",
                "m_field8": "m_aboveCpuClock", "m_fieldc": "m_belowCpuClock",
                "m_field10": "m_ram", "m_field14": "m_videocardVendor",
                "m_field18": "m_videocardDevice", "m_field1c": "m_videocardTextureMem",
                "m_field1e": "m_osVersion"}

    # ================= Statistics.cpp =================
    path = base + "Statistics.cpp"
    lines = read_lines(path)
    rules = [
        (60, 76, CUBE),
        (135, 163, DT_VALUE_KEY),
        (163, 193, DT_JOB_KEY),
        (193, 219, DT_PARTY_KEY),
        (219, 265, PARTY_KEY),
        (265, 304, PARTY_JOB_KEY),
        (304, 361, PARTY_CHARAC_KEY),
        (361, 383, OVERFLOW_KEY),
        (383, 429, PARTY_KEY),
        (429, 467, PARTY_JOB_KEY),
        (467, 514, PARTY_CHARAC_KEY),
        (514, 544, DT_VALUE_KEY),
        (544, 593, DT_JOB_KEY),
        (593, 626, DT_PARTY_KEY),
        (626, 644, OVERFLOW_KEY),
        (654, 693, ASSERT_KEY),
        (693, 724, ASSERT_KEY),
        (728, 766, TING_KEY),
        (766, 795, TING_ITEM),
        (798, 827, TING_WRITE_ITEM),
        (831, 861, HELL_KEY),
        (861, 901, HELL_KEY),
        (1185, 1211, FATIGUE),
        (1215, 1230, FATIGUE),
        (1230, 1255, BLOOD),
        (1259, 1277, BLOOD),
        (1681, 1696, SMATCH),
        (1757, 1773, GOLDCARD),
        (2015, 2029, CUBE),
    ]
    for start, end, mapping in rules:
        apply_bare(lines, start - 1, end - 1, mapping)
    for i in range(543, 592):
        lines[i] = re.sub(r"pkt\.m_items\[idx\]\.m_avg\b",
                          "pkt.m_items[idx].m_avgClearCount", lines[i])
        lines[i] = re.sub(r"pkt\.m_items\[idx\]\.m_count\b",
                          "pkt.m_items[idx].m_playCount", lines[i])
    for i in range(592, 625):
        lines[i] = lines[i].replace("pkt.m_items[idx].m_value", "pkt.m_items[idx].m_avgClearCount")
    apply_bare(lines, 727, 798, {"m_field110": "m_tingUser"})
    # AddLoadingTimeReportStatistics：v 先（数据），key 后
    apply_pref(lines, 900, 945, "v.", PW_LOAD_DATA)
    apply_pref(lines, 945, 967, "v.", PW_LAG_DATA)
    apply_bare(lines, 900, 967, PW_LOAD_KEY)
    apply_pref(lines, 985, 1018, "it->first.", PW_LOAD_KEY)
    apply_pref(lines, 985, 1018, "it->second.", PW_LOAD_DATA)
    apply_pref(lines, 1017, 1053, "it->first.", PW_LAG_KEY)
    apply_pref(lines, 1017, 1053, "it->second.", PW_LAG_DATA)
    apply_pref(lines, 1938, 2001, "m_p2p.", P2P)
    write_lines(path, lines)

    # ================= GMAccounts.cpp =================
    path = base + "GMAccounts.cpp"
    lines = read_lines(path)
    gm_rules = [
        (179, 193, PARTY_KEY),
        (607, 653, PARTY_KEY),
        (224, 240, PARTY_JOB_KEY),
        (653, 698, PARTY_JOB_KEY),
        (240, 254, PARTY_CHARAC_KEY),
        (698, 749, PARTY_CHARAC_KEY),
        (277, 286, DT_VALUE_KEY),
        (749, 765, DT_VALUE_KEY),
        (298, 308, DT_JOB_KEY),
        (765, 798, DT_JOB_KEY),
        (320, 328, DT_PARTY_KEY),
        (786, 798, DT_PARTY_KEY),
        (340, 352, OVERFLOW_KEY),
        (798, 804, OVERFLOW_KEY),
        (352, 365, ASSERT_KEY),
        (804, 818, ASSERT_KEY),
        (365, 376, TING_KEY),
        (813, 818, TING_KEY),
        (376, 399, HELL_KEY),
        (818, 853, HELL_KEY),
        (414, 426, PW_LOAD_KEY),
        (426, 440, PW_LOAD_DATA),
        (440, 452, PW_LAG_KEY),
        (452, 465, PW_LAG_DATA),
        (465, 470, FATIGUE),
        (853, 865, PW_LOAD_KEY),
        (859, 864, PW_LAG_KEY),
        (520, 528, P2P),
        (528, 607, {"m_field0": "m_id", "m_field1": "m_flag"}),
        (140, 155, SMATCH),
        (161, 170, GOLDCARD),
        (172, 179, {"m_field0": "m_success", "m_field4": "m_enter"}),
    ]
    for start, end, mapping in gm_rules:
        apply_bare(lines, start - 1, end - 1, mapping)
    write_lines(path, lines)

    # ================= CubeStatistics.cpp =================
    path = base + "CubeStatistics.cpp"
    lines = read_lines(path)
    apply_pref(lines, 0, len(lines), "key.", CUBE)
    apply_pref(lines, 0, len(lines), "it->first.", CUBE)
    apply_pref(lines, 0, len(lines), "pkt.m_items[count].", CUBE_ITEM)
    for i in range(len(lines)):
        lines[i] = lines[i].replace("pkt.m_items[count].m_value",
                                    "pkt.m_items[count].m_itemCount")
    write_lines(path, lines)

    # ================= HWSpecResearcher.cpp =================
    path = base + "HWSpecResearcher.cpp"
    lines = read_lines(path)
    apply_bare(lines, 0, 12, {"m_field48": "m_specSaveTick", "m_field68": "m_errorSaveTick"})
    apply_pref(lines, 51, 73, "pkt.", {"m_fieldA": "m_flag", "m_fieldB": "m_count"})
    apply_pref(lines, 55, 66, "pkt.m_items[count].", {"m_field0": "m_total"})
    apply_bare(lines, 78, 94, {"m_field48": "m_specSaveTick", "m_field68": "m_errorSaveTick"})
    apply_pref(lines, 96, 101, "errorValue.", {"m_field0": "m_errorLine",
                                               "m_field4": "m_errorCode"})
    apply_pref(lines, 116, 125, "it->first.", {"m_field0": "m_errorLine",
                                               "m_field4": "m_errorCode"})
    apply_pref(lines, 116, 125, "pkt.m_items[count].",
               {"m_field0": "m_errorCode", "m_field4": "m_errorLine", "m_field6": "m_cnt"})
    apply_bare(lines, 144, 148, {"m_field0": "m_category1", "m_field4": "m_category2",
                                 "m_field8": "m_category3"})
    write_lines(path, lines)

    # ================= UdpCharacteristic.cpp =================
    path = base + "UdpCharacteristic.cpp"
    lines = read_lines(path)
    apply_bare(lines, 0, len(lines),
               {"m_field0": "m_intervalTick", "m_field4": "m_successPartyTry",
                "m_field8": "m_totalPartyTry", "m_fieldc": "m_dungeonBadPing",
                "m_field10": "m_dungeonTotal", "m_field14": "m_pvpBadPing",
                "m_field18": "m_pvpTotal", "m_field1c": "m_fairPvpBadPing",
                "m_field20": "m_fairPvpTotal", "m_field24": "m_successDungeonClear",
                "m_field28": "m_totalDungeonClear"})
    write_lines(path, lines)

    # ================= DNFPacketTranslater.cpp（仅 HolePunching 函数 + ctor）=================
    path = base + "DNFPacketTranslater.cpp"
    lines = read_lines(path)
    apply_bare(lines, 1003, 1038,
               {"m_fieldA": "m_serverGroup", "m_fieldB": "m_connectedType",
                "m_fieldC": "m_requiredTime", "m_fieldD": "m_checkTime",
                })
    for i in range(1003, 1038):
        lines[i] = lines[i].replace("m_restE", "m_nationCode").replace("m_restF", "m_peerAddress")
    write_lines(path, lines)

    # ================= ErrorValue.cpp =================
    path = base + "ErrorValue.cpp"
    lines = read_lines(path)
    apply_bare(lines, 0, len(lines), {"m_field0": "m_errorLine", "m_field4": "m_errorCode"})
    write_lines(path, lines)

    # ================= DNFServerHandler.cpp / DNFServerConfig.cpp =================
    for p in (base + "DNFServerHandler.cpp", base + "DNFServerConfig.cpp"):
        lines = read_lines(p)
        apply_bare(lines, 0, len(lines),
                   {"m_field0": "m_serverType", "m_field1": "m_id", "m_field2": "m_serverIndex"})
        write_lines(p, lines)

    # ================= DNFDBServer.cpp =================
    path = base + "DNFDBServer.cpp"
    lines = read_lines(path)
    apply_bare(lines, 7, 12, {"m_field0": "m_total"})
    apply_bare(lines, 12, 17, {"m_fieldA": "m_flag", "m_fieldB": "m_count"})
    apply_bare(lines, 17, 24, {"m_field0": "m_errorCode", "m_field4": "m_errorLine",
                               "m_field6": "m_cnt"})
    apply_bare(lines, 25, 32, {"m_field0": "m_category1", "m_field4": "m_category2",
                               "m_field8": "m_category3"})
    apply_bare(lines, 31, 38, {"m_field0": "m_errorLine", "m_field4": "m_errorCode"})
    apply_bare(lines, 104, 115, {"m_field0": "m_category1", "m_field4": "m_category2",
                                 "m_field8": "m_category3"})
    apply_bare(lines, 114, 120, {"m_field0": "m_errorLine", "m_field4": "m_errorCode"})
    write_lines(path, lines)

    # ================= FrameLagCollector.cpp（MonitoringSpecCase）=================
    path = base + "FrameLagCollector.cpp"
    lines = read_lines(path)
    apply_pref(lines, 0, len(lines), "it->second.", SPEC_MON)
    apply_pref(lines, 0, len(lines), "mc.", SPEC_MON)
    write_lines(path, lines)

    print("done")


if __name__ == "__main__":
    main()
