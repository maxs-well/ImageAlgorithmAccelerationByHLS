set clock_constraint { \
    name clk \
    module rgb2gray \
    port ap_clk \
    period 10 \
    uncertainty 1.25 \
    axilite_clocks {AXI_LITE_clk } \
}

set all_path {}

set false_path {}

