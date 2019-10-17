#ifndef BUILTIN_EXPS_H
#define BUILTIN_EXPS_H

#include <QStringList>

namespace BuiltIn_Expressions {
    static QStringList modules({});
    static int modules_count = modules.length();
    static QStringList functions({"#load","#use",
                                  "Unix","Unix.sleep","\"unix.cma\"",
                                  "Random","Random.init","Random.int",
                                  "on",
                                  "register_named_value",
                                  "raise",
                                  "raise_notrace",
                                  "failwith",
                                  "invalid_arg",
                                  "Exit",
                                  "Match_failure",
                                  "Assert_failure",
                                  "Invalid_argument",
                                  "Failure",
                                  "Not_found",
                                  "Out_of_memory",
                                  "Stack_overflow",
                                  "Sys_error",
                                  "End_of_file",
                                  "Division_by_zero",
                                  "Sys_blocked_io",
                                  "Undefined_recursive_module",
                                  "__LOC__",
                                  "__FILE__",
                                  "__LINE__",
                                  "__MODULE__",
                                  "__POS__",
                                  "__LOC_OF__",
                                  "__LINE_OF__",
                                  "__POS_OF__",
                                  "compare",
                                  "min",
                                  "max",
                                  "not",
                                  "succ",
                                  "pred",
                                  "abs",
                                  "lnot",
                                  "max_int",
                                  "min_int",
                                  "exp",
                                  "expm1",
                                  "acos",
                                  "asin",
                                  "atan",
                                  "atan2",
                                  "hypot",
                                  "cos",
                                  "cosh",
                                  "log",
                                  "log10",
                                  "log1p",
                                  "sin",
                                  "sinh",
                                  "sqrt",
                                  "tan",
                                  "tanh",
                                  "ceil",
                                  "floor",
                                  "abs_float",
                                  "copysign",
                                  "mod_float",
                                  "frexp",
                                  "ldexp",
                                  "modf",
                                  "float",
                                  "float_of_int",
                                  "truncate",
                                  "int_of_float",
                                  "float_of_bits",
                                  "infinity",
                                  "neg_infinity",
                                  "nan",
                                  "max_float",
                                  "min_float",
                                  "epsilon_float",
                                  "fpclass",
                                  "classify_float",
                                  "string_length",
                                  "bytes_length",
                                  "bytes_create",
                                  "string_blit",
                                  "bytes_blit",
                                  "bytes_unsafe_to_string",
                                  "l1",
                                  "int_of_char",
                                  "unsafe_char_of_int",
                                  "char_of_int",
                                  "ignore",
                                  "fst",
                                  "snd",
                                  "ref",
                                  "incr",
                                  "decr",
                                  "format_int",
                                  "format_float",
                                  "string_of_bool",
                                  "bool_of_string",
                                  "bool_of_string_opt",
                                  "string_of_int",
                                  "int_of_string",
                                  "int_of_string_opt",
                                  "string_get",
                                  "valid_float_lexem",
                                  "rec",
                                  "loop",
                                  "string_of_float",
                                  "float_of_string",
                                  "float_of_string_opt",
                                  "rec",
                                  "in_channel",
                                  "out_channel",
                                  "open_descriptor_out",
                                  "open_descriptor_in",
                                  "stdin",
                                  "stdout",
                                  "stderr",
                                  "open_flag",
                                  "open_desc",
                                  "open_out_gen",
                                  "open_out",
                                  "open_out_bin",
                                  "flush",
                                  "out_channels_list",
                                  "flush_all",
                                  "rec",
                                  "iter",
                                  "unsafe_output",
                                  "unsafe_output_string",
                                  "output_char",
                                  "output_bytes",
                                  "output_string",
                                  "output",
                                  "output_substring",
                                  "output_byte",
                                  "output_binary_int",
                                  "marshal_to_channel",
                                  "output_value",
                                  "seek_out",
                                  "pos_out",
                                  "out_channel_length",
                                  "close_out_channel",
                                  "close_out",
                                  "close_out_noerr",
                                  "set_binary_mode_out",
                                  "open_in_gen",
                                  "open_in",
                                  "open_in_bin",
                                  "input_char",
                                  "unsafe_input",
                                  "input",
                                  "rec",
                                  "unsafe_really_input",
                                  "really_input",
                                  "really_input_string",
                                  "input_scan_line",
                                  "input_line",
                                  "rec",
                                  "build_result",
                                  "len",
                                  "rec",
                                  "scan",
                                  "res",
                                  "len",
                                  "beg",
                                  "input_byte",
                                  "input_binary_int",
                                  "input_value",
                                  "seek_in",
                                  "pos_in",
                                  "in_channel_length",
                                  "close_in",
                                  "close_in_noerr",
                                  "set_binary_mode_in",
                                  "print_char",
                                  "print_string",
                                  "print_bytes",
                                  "print_int",
                                  "print_float",
                                  "print_endline",
                                  "print_newline",
                                  "prerr_char",
                                  "prerr_string",
                                  "prerr_bytes",
                                  "prerr_int",
                                  "prerr_float",
                                  "prerr_endline",
                                  "prerr_newline",
                                  "read_line",
                                  "read_int",
                                  "read_int_opt",
                                  "read_float",
                                  "read_float_opt",
                                  "seek_out",
                                  "pos_out",
                                  "out_channel_length",
                                  "seek_in",
                                  "pos_in",
                                  "in_channel_length",
                                  "string_of_format",
                                  "format_of_string",
                                  "sys_exit",
                                  "exit_function",
                                  "at_exit",
                                  "f_already_ran",
                                  "do_at_exit",
                                  "exit"});
    static int functions_count = functions.length();
    static QStringList words({});
    static int words_count = words.length();
}

#endif // BUILTIN_EXPS_H
